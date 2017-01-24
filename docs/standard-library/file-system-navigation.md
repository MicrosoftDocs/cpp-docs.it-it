---
title: "Esplorazione del file system | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: f7cc5f5e-a541-4e00-87c7-a3769ef6096d
caps.latest.revision: 14
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Esplorazione del file system
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'intestazione \<filesystem\> implementa una versione bozza della specifica tecnica del file system \([ISO\/IEC JTC 1\/SC 22\/WG 21 N4100](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4100.pdf)\) e contiene tipi e funzioni che consentono di scrivere codice indipendente dalla piattaforma per l'esplorazione del file system. Essendo multipiattaforma, contiene le API che non sono rilevanti per i sistemi Windows. Ciò significa, ad esempio, che `is_fifo(const path&)` restituisce sempre `false` in Windows. L'intestazione è basata su una versione bozza della specifica tecnica che non è stata inserita come standard C\+\+17 a partire da Visual Studio 2015 RTM. I relativi membri sono disponibili nello spazio dei nomi `std::experimental::filesystem::v1`.  
  
## Panoramica  
 Usare le API \<filesystem\> per le attività seguenti:  
  
-   eseguire l'iterazione su file e directory in un percorso specificato  
  
-   ottenere informazioni sui file inclusi data e ora di creazione, dimensioni, estensione e directory principale  
  
-   comporre, scomporre e confrontare percorsi  
  
-   creare, copiare ed eliminare le directory  
  
-   copiare ed eliminare i file  
  
 Per altre informazioni di I\/O di file con la libreria standard, vedere la [Programmazione iostream](../standard-library/iostream-programming.md).  
  
## Percorsi  
  
### Costruzione e composizione di percorsi  
 I percorsi in Windows \(a partire da XP\) vengono archiviati in modo nativo in formato Unicode. La classe [path](../standard-library/path-class-cpp-standard-template-library.md) esegue automaticamente tutte le conversioni di stringa necessarie. Accetta gli argomenti di matrici di caratteri sia wide che narrow, nonché tipi `std::string` e `std::wstring` nel formato UTF8 o UTF16. La classe `path` normalizza automaticamente anche i separatori del percorso. È possibile usare una singola barra come separatore di directory in argomenti del costruttore. In questo modo è possibile usare le stesse stringhe per memorizzare i percorsi in ambienti Windows e UNIX:  
  
```cpp  
path pathToDisplay(L"/FileSystemTest/SubDir3"); // OK! path pathToDisplay2(L"\\FileSystemTest\\SubDir3"); // Still OK as always path pathToDisplay3(LR"(\FileSystemTest\SubDir3)"); // Raw string literals are OK, too.  
```  
  
 Per concatenare due percorsi, è possibile usare gli operatori  `/` e `/=` in rapporto di overload, che sono analoghi agli operatori `+` e `+=` in `std::string` e `std::wstring`. L'oggetto `path` fornirà in modo pratico i separatori, se non sono presenti.  
  
```cpp  
path myRoot("C:/FileSystemTest"); // no trailing separator, no problem! myRoot /= path("SubDirRoot"); // C:/FileSystemTest/SubDirRoot  
```  
  
### Esame dei percorsi  
 La classe path ha diversi metodi che restituiscono informazioni sulle varie parti del percorso stesso, distinte dall'entità di file system a cui potrebbe riferirsi. È possibile ottenere la radice, il percorso relativo, il nome del file, l'estensione del file e molto altro. È possibile eseguire l'iterazione su un oggetto path per esaminare tutte le cartelle nella gerarchia. L'esempio seguente illustra come eseguire l'iterazione su un percorso \(non la directory a cui fa riferimento\) e recuperare informazioni sulle sue parti.  
  
```cpp  
  
#include <string> #include <iostream> #include <sstream> #include <filesystem> using namespace std; using namespace std::experimental::filesystem::v1; wstring  DisplayPathInfo() { // This path may or may not refer to an existing file. We are // examining this path string, not file system objects. path pathToDisplay(L"C:/FileSystemTest/SubDir3/SubDirLevel2/File2.txt "); wostringstream wos; int i = 0; wos << L"Displaying path info for: " << pathToDisplay << endl; for (path::iterator itr = pathToDisplay.begin(); itr != pathToDisplay.end(); ++itr) { wos << L"path part: " << i++ << L" = " << *itr << endl; } wos << L"root_name() = " << pathToDisplay.root_name() << endl << L"root_path() = " << pathToDisplay.root_path() << endl << L"relative_path() = " << pathToDisplay.relative_path() << endl << L"parent_path() = " << pathToDisplay.parent_path() << endl << L"filename() = " << pathToDisplay.filename() << endl << L"stem() = " << pathToDisplay.stem() << endl << L"extension() = " << pathToDisplay.extension() << endl; return wos.str(); } void main(int argc, char* argv[]) { wcout << DisplayPathInfo() << endl; // wcout << ComparePaths() << endl; // see following example wcout << endl << L"Press Enter to exit" << endl; wstring input; getline(wcin, input); }  
```  
  
 Il codice produce il seguente output:  
  
```cpp  
Displaying path info for: C:\FileSystemTest\SubDir3\SubDirLevel2\File2.txt path part: 0 = C: path part: 1 = \ path part: 2 = FileSystemTest path part: 3 = SubDir3 path part: 4 = SubDirLevel2 path part: 5 = File2.txt root_name() = C: root_path() = C:\ relative_path() = FileSystemTest\SubDir3\SubDirLevel2\File2.txt parent_path() = C:\FileSystemTest\SubDir3\SubDirLevel2 filename() = File2.txt stem() = File2 extension() = .txt  
```  
  
### Confronto tra percorsi  
 La classe `path` è in rapporto di overload con gli stessi operatori di confronto di `std::string` e `std::wstring`. Quando si confrontano due percorsi, si sta eseguendo un confronto tra stringhe dopo che i separatori sono stati normalizzati. Se non è presente una barra finale \(o una barra rovesciata\), non viene aggiunta e influenza il confronto. L'esempio seguente dimostra come confrontare i valori di percorso:  
  
```cpp  
  
wstring ComparePaths() { path p0(L"C:/Documents"); // no trailing separator path p1(L"C:/Documents/"); //p0 < p1 path p2(L"C:/Documents/2013/"); // p1 < p2 path p3(L"C:/Documents/2013/Reports/"); // p2 < p3 path p4(L"C:/Documents/2014/");  // p3 < p4 path p5(L"D:/Documents/2013/Reports/"); // p4 < p5 wostringstream wos; wos << boolalpha << p0.wstring() << L" < " << p1.wstring() << L": " << (p0 < p1) << endl << p1.wstring() << L" < " << p2.wstring() << L": " << (p1 < p2) << endl << p2.wstring() << L" < " << p3.wstring() << L": " << (p2 < p3) << endl << p3.wstring() << L" < " << p4.wstring() << L": " << (p3 < p4) << endl << p4.wstring() << L" < " << p5.wstring() << L": " << (p4 < p5) << endl; return wos.str(); } /* Output: C:\Documents < C:\Documents\: true C:\Documents\ < C:\Documents\2013\: true C:\Documents\2013\ < C:\Documents\2013\Reports\: true C:\Documents\2013\Reports\ < C:\Documents\2014\: true C:\Documents\2014\ < D:\Documents\2013\Reports\: true */  
```  
  
 Per eseguire questo codice, incollarlo nell'esempio completo sopra riportato e rimuovere il commento dalla riga che chiama tale codice.  
  
### Conversione tra tipi di stringa e percorso  
 Un oggetto `path` è convertibile in modo implicito in un oggetto `std::wstring` o `std::string`. Ciò significa che è possibile passare un percorso a funzioni quali [wofstream::open](../Topic/basic_ofstream::open.md), come illustrato nell'esempio seguente:  
  
```cpp  
wchar_t* p = L"C:/test"; path filePath(p); filePath /= L"NewFile.txt"; // Open, write to, and close the file. wofstream myFile; myFile.open(filePath); myFile << L"Lorem ipsum..."; myFile.close  
  
```  
  
## Iterazione di directory e file  
 L'intestazione \<filesystem\> fornisce il tipo [directory\_iterator](../standard-library/directory-iterator-class.md) per eseguire l'iterazione sulle singole directory e la classe [recursive\_directory\_iterator](../standard-library/recursive-directory-iterator-class.md) per eseguire l'iterazione in modo ricorsivo su una directory e le relative sottodirectory. Dopo aver creato un iteratore passandovi un oggetto `path`, l'iteratore punta al primo oggetto directory\_entry nel percorso. Creare l'iteratore finale chiamando il costruttore predefinito.  
  
 Quando si esegue l'iterazione su una directory, è possibile riscontrare diversi tipi di elementi, inclusi in via esemplificativa directory, file, collegamenti simbolici e file di socket. L'oggetto `directory_iterator` restituisce i relativi elementi come oggetti [directory\_entry](../standard-library/directory-entry-class.md) e ciascun oggetto ha un membro [status\(\)](http://msdn.microsoft.com/it-it/a70a3c55-3a76-417f-abaf-862ff94b2056) che indica quale tipo di voce si sta esaminando. Esaminando questo valore, è possibile prendere decisioni sul da farsi per qualsiasi voce particolare. Nell'esempio seguente viene eseguita un'iterazione su una singola directory e se la voce di directory è un file normale, il codice visualizza alcune informazioni su tale file. Se la voce è una directory, viene visualizzato solo il nome.  
  
```cpp  
#include <string> #include <iostream> #include <iomanip> #include <filesystem> #include <chrono> #include <time.h> using namespace std; using namespace std::experimental::filesystem::v1; // Display the last write time for the file wstring LastWriteTimeToLocalTime(const path& file_path) { const auto last = chrono::system_clock::to_time_t(last_write_time(file_path)); tm timeinfo; localtime_s(&timeinfo, &last); wchar_t buf[56]; _wasctime_s(buf, 56, &timeinfo); // appends '\n' return wstring{ buf }; } // List files and directories in the specified path void DisplayFolderContents(const path& p) { wcout << L"Begin iterating " << p.wstring() << endl; for (const auto& entry : directory_iterator{ p }) { if (is_regular_file(entry.status())) { wcout << L" File: " << entry.path().filename() << " : " << LastWriteTimeToLocalTime(entry.path()); } else if (is_directory(entry.status())) { wcout << L" Dir: " << entry.path().filename() << endl; } } } void main() { wstring dir{ LR"(C:\users\public\documents\)" }; path p{ dir }; if (!is_directory(p)) { wcout << L"No such directory: " << dir << endl; return; } DisplayFolderContents(p); // IterateFolderRecursively(p); // see example wcout << endl << L"Press Enter to exit" << endl; wstring input; getline(wcin, input); }  
```  
  
### Iterazione di una struttura ad albero di directory in modo ricorsivo  
 L'esempio seguente illustra come eseguire l'iterazione in modo ricorsivo attraverso una struttura ad albero di directory. Per eseguire questa funzione, incollarla nell'esempio di codice precedente dopo la funzione DisplayFolderContents e rimuovere il commento dalla riga che chiama tale funzione.  
  
```cpp  
// List files and directories recursively in the path void IterateFolderRecursively(const path& p) { wcout << L"Begin iterating " << p.wstring() << " recursively" << endl; for (recursive_directory_iterator it{ p }, end; it != end; ++it) { if (is_regular_file(it->status())) { wcout << setw(it.depth()) << L" " << L"File: " << it->path().filename() << L" : " << LastWriteTimeToLocalTime(it->path()); } else if (is_directory(it->status())) { wcout << setw(it.depth()) << L" " << L"Dir: " << it->path().filename() << endl; } } }  
```  
  
### Gestione di collegamenti simbolici  
 Il rilevamento di un collegamento simbolico non è ancora supportato in Visual C\+\+ a partire da Visual Studio 2015.