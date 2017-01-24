---
title: "Procedura: interfaccia tra codice eccezionale e non eccezionale | Microsoft Docs"
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
ms.assetid: fd5bb4af-5665-46a1-a321-614b48d4061e
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: interfaccia tra codice eccezionale e non eccezionale
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritto come implementare un gestore consistente delle eccezioni in un modulo C\+\+ e viene illustrato come convertire tali eccezioni da e verso i codici di errore ai bordi della eccezione.  
  
 Talvolta un modulo C\+\+ è un'interfaccia al codice che non utilizza le eccezioni \(codice senza eccezione\).  Tale interfaccia è nota come *limite di eccezione*.  Ad esempio, è necessario chiamare la funzione Win32 `CreateFile` nel programma C\+\+.  `CreateFile` non genera eccezioni; invece imposta i codici di errore che possono venire recuperati dalla funzione `GetLastError`.  Se il programma C\+\+ è complesso, si desidera probabilmente avere una politica di gestione degli errori coerente con le eccezioni che si basano su un codice.  E probabilmente non si desidera abbandonare l'utilizzo delle eccezioni solo perché un'interfaccia contiene codice privo di esse e non si desidera combinare i criteri delle eccezioni di base con le politiche di errore delle eccezioni di base nel modulo C\+\+.  
  
## Chiamata a funzioni non eccezionali da C\+\+  
 Quando si chiama una funzione non eccezionale da C\+\+, lo scopo è quello di eseguire il wrapping della funzione in una funzione C\+\+ che rileva eventuali errori e quindi genera eventualmente un'eccezione.  Quando si progetta una funzione wrapper, è necessario decidere quale tipi di garanzie vengono fornite: non generare le eccezione, forte oppure base.  In secondo luogo, progettare la funzione in modo da rilasciare tutte le risorse, ad esempio, gli handle dei file sono correttamente rilasciati se un'eccezione viene generata.  In genere, questo significa che utilizza puntatori intelligenti o gestori delle risorse simili alle proprie risorse.  Per ulteriori informazioni sulle considerazioni di progettazione, vedere [Procedura: progettare la sicurezza dell'eccezione](../cpp/how-to-design-for-exception-safety.md).  
  
### Esempio  
 L'esempio seguente mostra le funzioni C\+\+ che utilizzano funzioni Win32 `CreateFile` e `ReadFile` internamente per aprire e leggere due file.  La classe `File` rappresenta un'acquisizione della risorsa è inizializza il wrapper \(RAII\) per i file di handle.  Il costruttore viene rilevato in uno stato "impossibile trovare il file" e genera un'eccezione per propagare l'errore nello stack di chiamate del modulo C\+\+ \(in questo esempio, la funzione `main()`\).  Se un'eccezione viene generata quando un oggetto `File` è completamente costruito, il distruttore chiama automaticamente `CloseHandle` per rilasciare il file di handle. \(Se si preferisce, è possibile utilizzare la classe ATL \(Active Template Library \(ATL\) `CHandle` per questo stesso scopo oppure `unique_ptr` con un deleter personalizzato.\) Le funzioni che chiamano Win32 e API CRT rilevano gli errori e quindi generano eccezioni C\+\+ che utilizzando la funzione definita localmente `ThrowLastErrorIf`, che a sua volta utilizza la classe `Win32Exception`, derivata dalla classe `runtime_error`.  In questo esempio, tutte le funzioni forniscono una solida garanzia di eccezione; se viene generata un'eccezione in un punto qualsiasi di queste funzioni, nessuna risorsa fuoriesce e lo stato del programma viene modificato.  
  
```cpp  
// compile with: /EHsc  
#include <Windows.h>  
#include <stdlib.h>  
#include <vector>  
#include <iostream>  
#include <string>  
#include <limits>  
#include <stdexcept>  
  
using namespace std;  
  
string FormatErrorMessage(DWORD error, const string& msg)  
{  
    static const int BUFFERLENGTH = 1024;  
    vector<char> buf(BUFFERLENGTH);  
    FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, 0, error, 0, buf.data(),   
        BUFFERLENGTH - 1, 0);   
    return string(buf.data()) + "   ("  + msg  + ")";  
}  
  
class Win32Exception : public runtime_error  
{      
private:  
    DWORD m_error;  
public:  
    Win32Exception(DWORD error, const string& msg)  
        : runtime_error(FormatErrorMessage(error, msg)), m_error(error) { }  
  
    DWORD GetErrorCode() const { return m_error; }  
};  
  
void ThrowLastErrorIf(bool expression, const string& msg)   
{   
    if (expression) {   
        throw Win32Exception(GetLastError(), msg);   
    }   
}   
  
class File  
{  
private:  
    HANDLE m_handle;  
  
    // Declared but not defined, to avoid double closing.  
    File& operator=(const File&);  
    File(const File&);  
public:  
    explicit File(const string& filename)   
    {  
        m_handle = CreateFileA(filename.c_str(), GENERIC_READ, FILE_SHARE_READ,   
            nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, nullptr);  
        ThrowLastErrorIf(m_handle == INVALID_HANDLE_VALUE,   
            "CreateFile call failed on file named " + filename);  
    }  
  
    ~File() { CloseHandle(m_handle); }  
  
    HANDLE GetHandle() { return m_handle; }  
};  
  
size_t GetFileSizeSafe(const string& filename)  
{  
    File fobj(filename);  
    LARGE_INTEGER filesize;  
  
    BOOL result = GetFileSizeEx(fobj.GetHandle(), &filesize);  
    ThrowLastErrorIf(result == FALSE, "GetFileSizeEx failed: " + filename);  
  
    if (filesize.QuadPart < (numeric_limits<size_t>::max)()) {  
        return filesize.QuadPart;  
    } else {  
        throw;   
    }  
}  
  
vector<char> ReadFileVector(const string& filename)  
{  
    File fobj(filename);  
    size_t filesize = GetFileSizeSafe(filename);  
    DWORD bytesRead = 0;  
  
    vector<char> readbuffer(filesize);  
  
    BOOL result = ReadFile(fobj.GetHandle(), readbuffer.data(), readbuffer.size(),   
        &bytesRead, nullptr);  
    ThrowLastErrorIf(result == FALSE, "ReadFile failed: " + filename);  
  
    cout << filename << " file size: " << filesize << ", bytesRead: "   
        << bytesRead << endl;  
  
    return readbuffer;  
}  
  
bool IsFileDiff(const string& filename1, const string& filename2)   
{  
    return ReadFileVector(filename1) != ReadFileVector(filename2);  
}   
  
#include <iomanip>  
  
int main ( int argc, char* argv[] )  
{  
    string filename1("file1.txt");  
    string filename2("file2.txt");  
  
    try  
    {  
        if(argc > 2) {  
            filename1 = argv[1];  
            filename2 = argv[2];  
        }   
  
        cout << "Using file names " << filename1 << " and " << filename2 << endl;  
  
        if (IsFileDiff(filename1, filename2)) {  
            cout << "*** Files are different." << endl;  
        } else {  
            cout<< "*** Files match." << endl;  
        }  
    }  
    catch(const Win32Exception& e)  
    {          
        ios state(nullptr);  
        state.copyfmt(cout);  
        cout << e.what() << endl;  
        cout << "Error code: 0x" << hex << uppercase << setw(8) << setfill('0')   
            << e.GetErrorCode() << endl;  
        cout.copyfmt(state); // restore previous formatting  
    }  
}  
  
```  
  
## Chiamata ad un codice eccezionale da un codice non eccezionale  
 Le funzioni C\+\+ dichiarate come "extern C" possono essere chiamate da programmi C.  I Server COM C\+\+ possono essere utilizzati da codici creati in una serie di linguaggi diversi.  Quando si implementano funzioni pubbliche con eccezioni note in C\+\+ da chiamare in un codice non eccezionale, la funzione C\+\+ non deve consentire a qualsiasi eccezione di propagarsi all'indietro fino al chiamante.  Pertanto, la funzione C\+\+ deve in particolare intercettare ogni eccezione che è in grado di gestire e se richiesto, convertire l'eccezione in un codice di errore che il chiamante conosce.  Se non tutte le eccezioni possibili sono note, la funzione C\+\+ devono contenere un blocco `catch(…)` come ultimo gestore.  In questo caso, è consigliabile segnalare un errore irreversibile al chiamante, perché il programma potrebbe essere in uno stato sconosciuto.  
  
 Nell'esempio seguente viene illustrata una funzione che presuppone che qualsiasi eccezione può essere generata come una Win32Exception o un tipo di eccezione derivata da `std::exception`.  La funzione intercetta tutte le eccezioni di questi tipi e propaga fino al chiamante l'informazione dell'errore, come un codice di errore Win32.  
  
```cpp  
BOOL DiffFiles2(const string& file1, const string& file2)   
{   
    try   
    {   
        File f1(file1);   
        File f2(file2);   
        if (IsTextFileDiff(f1, f2))   
        {   
            SetLastError(MY_APPLICATION_ERROR_FILE_MISMATCH);   
            return FALSE;   
        }   
        return TRUE;   
    }   
    catch(Win32Exception& e)   
    {   
        SetLastError(e.GetErrorCode());   
    }  
  
    catch(std::exception& e)   
    {   
        SetLastError(MY_APPLICATION_GENERAL_ERROR);   
    }   
    return FALSE;   
}  
  
```  
  
 Quando si converte le eccezioni in codici di errore, un possibile problema è che i codici di errore spesso non contengono la ricchezza di informazioni che un'eccezione può archiviare.  Per risolvere questo problema, è possibile fornire un blocco `catch` per ogni tipo di eccezione specifica che può essere generata e si esegue la registrazione per registrare i dettagli dell'eccezione prima che venga convertita in un codice di errore.  Questo approccio può creare più ripetizione di codice se molteplici funzioni utilizzano lo stesso insieme di blocchi `catch`.  Una tecnica efficace per evitare la ripetizione di codice è il refactoring di tali blocchi in una funzione di utilità privata che implementa i blocchi `catch` e `try` ed accetta un oggetto funzione che viene richiamato nel blocco `try`.  In ogni funzione pubblica viene passato il codice per la funzione di utilità come una lambda espressione.  
  
```cpp  
template<typename Func>   
bool Win32ExceptionBoundary(Func&& f)   
{   
    try   
    {   
        return f();   
    }   
    catch(Win32Exception& e)   
    {   
        SetLastError(e.GetErrorCode());   
    }   
    catch(const std::exception& e)   
    {   
        SetLastError(MY_APPLICATION_GENERAL_ERROR);   
    }   
    return false;   
}  
  
```  
  
 Di seguito viene illustrato come scrivere una lambda espressione che definisce il functor.  Quando un functor è definito "inline" utilizzando una lambda espressione è spesso più facile da leggere rispetto a quanto sarebbe se fosse scritto come un oggetto funzione denominato.  
  
```cpp  
bool DiffFiles3(const string& file1, const string& file2)   
{   
    return Win32ExceptionBoundary([&]() -> bool  
    {   
        File f1(file1);   
        File f2(file2);   
        if (IsTextFileDiff(f1, f2))   
        {   
            SetLastError(MY_APPLICATION_ERROR_FILE_MISMATCH);   
            return false;   
        }   
        return true;   
    });   
}  
  
```  
  
 Per ulteriori informazioni sulle espressioni lambda, vedere [Espressioni lambda](../cpp/lambda-expressions-in-cpp.md).  
  
## Vedere anche  
 [Gestione di errori ed eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md)   
 [Procedura: progettare la sicurezza dell'eccezione](../cpp/how-to-design-for-exception-safety.md)