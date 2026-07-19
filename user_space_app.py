def main():
    with open("/proc/ldd_driver", "w") as f:
        f.write("HELLO FROM USER SPACE!!!")

    with open("/proc/ldd_driver", "r") as f:
        print(f.read())

    return

main()