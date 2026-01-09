int main(int argc, char* argv[]) {
    if(argc == 1) { 
        return 1; 
    } else { 
        return main(argc - 1, argv) * argc;
    }
}