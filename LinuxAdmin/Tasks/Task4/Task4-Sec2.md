# Section 2

### 1. Create a supplementary (Secondary) group called pgroup with group ID of 30000 
    
    sudo groupadd -g 30000 pgroup
 
### 2. Lock any user created account so he can't log in

    sudo usermod -L Abdelrahman

### 3. Delete user account

    sudo userdel -r Abdelrahman

### 4. Delete group account

    sudo groupdel pgroup

### 5. State the difference between adduser and useradd with example shown.

- `useradd`: This is a low-level utility for adding users. It has fewer defaults and requires you to specify all details

    ```
    sudo useradd -m -s /bin/bash user_name 
    
    ```
- `adduser`: This is a higher-level utility, often a frontend to useradd. It provides a more interactive and user-friendly way to add users 

    ``` 
    sudo adduser user_name
    ```

