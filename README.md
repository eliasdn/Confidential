# Confidential
The software encrypts your data and turns your storage space into a vault.

# App Design
Encryption algorythm: XChaCha20-Poly1305
programation laguage: c++, Qt
storage : sqlite

## Steps:
	Step 0: 	Select your disk drive/usb
    Step 1: 	Main page: Register(button) or login(button)
    Step 2a: 	Register(page): set username(dbName) and a password(used to encrypt the .db file)
    Step 2b: 	Login(page): input your username and your password(used to decrypt the .db file)
    Step 3: 	Show all folders of the usb -> Select one Folders/file Crypt or decrypt it

## Function:
	register() : 	Create db file at the defined location. Create the "files" table. Encrypt the .db file using XChaCha20-Poly1305 and the password as the key.
	login() :		Decrypt the .db file using XChaCha20-Poly1305 and the password as the key, 

## storage design:

    Storage:/
		Confidential/
		├── Vault/
		│   ├── EncryptFolderA/
		│   │   └── FileA
		│   ├── EncryptFolderB/
		│   │   └── FileA
		│   └── EncryptFolderC/
		│       └── FileA
		├── Databases/
		│   └── username.db
		├── Confidential.exe(Windows bin)
		├── Confidential(Linux bin)
		└── Confidential(Mac bin)
     

When the first account is registred $username.db file is created in the folder "Databases"
In $username.db they are:
    files(table):
    ┌────────────────┬─────────────┐
		│      File      │ PrivateKey  │
		├────────────────┼─────────────┤
		│ FolderA/FilesA │ PrivateKeyX │
		│ FolderB/FilesA │ PrivateKeyY │
		│ FolderB/FilesB │ PrivateKeyZ │
		└────────────────┴─────────────┘
		
