---
title: 'Procedura: interfaccia tra codice eccezionale e Non eccezionale | Microsoft Docs'
ms.custom: how-to
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: fd5bb4af-5665-46a1-a321-614b48d4061e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4870258a946aaf5c86919e1fd04f574aaed4d99b
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43213218"
---
# <a name="how-to-interface-between-exceptional-and-non-exceptional-code"></a>Procedura: interfaccia tra codice eccezionale e non eccezionale

In questo articolo viene descritto come implementare una gestione delle eccezioni coerente in un modulo C++ e viene illustrato come convertire tali eccezioni da e verso i codici di errore ai limiti della eccezione.

Talvolta un modulo C++ deve interfacciarsi con del codice che non utilizza le eccezioni (codice senza eccezione). Tale interfaccia è noto come un *limite di eccezione*. Ad esempio, è necessario chiamare la funzione Win32 `CreateFile` nel programma C++. `CreateFile` non genera eccezioni; invece imposta codici di errore che possono venire recuperati dalla funzione `GetLastError`. Se il programma C++ è complesso, è preferibile includere una politica di gestione coerente degli errori basata sulle eccezioni. Inoltre è probabile che non si desideri abbandonare l'utilizzo delle eccezioni solo perché si deve interfacciare con del codice privo di eccezioni e che non si desideri combinare nel modulo C++ la politica di gestione degli errori basata sulle eccezioni con quella non basata sulle eccezioni.

## <a name="calling-non-exceptional-functions-from-c"></a>Chiamata a funzioni senza eccezioni da C++

Quando si chiama una funzione senza eccezioni da C++, lo scopo è quello di eseguire il wrapping della funzione in una funzione C++ che rileva eventuali errori e quindi genera eventualmente un'eccezione. Quando si progetta una funzione wrapper, è necessario innanzitutto decidere quale tipo di garanzie fornire: nessuna generazione, avanzata o di base. In secondo luogo, occorre progettare la funzione in modo che tutte le risorse, ad esempio, gli handle dei file, vengano correttamente rilasciate se viene generata un'eccezione. In genere, questo significa utilizzare puntatori intelligenti o gestori di risorse simili per gestire la proprietà delle risorse. Per altre informazioni sulle considerazioni relative alla progettazione, vedere [procedura: progettare la sicurezza di eccezione del](../cpp/how-to-design-for-exception-safety.md).

### <a name="example"></a>Esempio

Nell'esempio seguente vengono mostrate le funzioni C++ che utilizzano le funzioni Win32 `CreateFile` e `ReadFile` internamente per aprire e leggere due file.  La classe `File` rappresenta un wrapper RAII per gli handle di file. Il costruttore rileva uno stato "impossibile trovare il file" e genera un'eccezione per propagare l'errore nello stack di chiamate del modulo C++ (in questo esempio, la funzione `main()`). Se un'eccezione viene generata dopo che un oggetto `File` è completamente costruito, il distruttore chiama automaticamente `CloseHandle` per rilasciare l'handle di file. Se si preferisce, è possibile utilizzare la classe ATL (Active Template Library (ATL) `CHandle` per lo stesso scopo oppure `unique_ptr` con un deleter personalizzato. Le funzioni che chiamano le API Win32 e CRT rilevano gli errori e quindi generano eccezioni C++ utilizzando la funzione definita localmente `ThrowLastErrorIf`, che a sua volta utilizza la classe `Win32Exception`, derivata dalla classe `runtime_error`. In questo esempio, tutte le funzioni forniscono una solida garanzia di eccezione; se viene generata un'eccezione in un punto qualsiasi di queste funzioni, nessuna risorsa viene persa e nessuno stato del programma viene modificato.

```cpp
// compile with: /EHsc
#include <Windows.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>
#include <limits>
#include <stdexcept>

using namespace std;

string FormatErrorMessage(DWORD error, const string& msg)
{
    static const int BUFFERLENGTH = 1024;
    vector<char> buf(BUFFERLENGTH);
    FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, 0, error, 0, buf.data(),
        BUFFERLENGTH - 1, 0);
    return string(buf.data()) + "   ("  + msg  + ")";
}

class Win32Exception : public runtime_error
{
private:
    DWORD m_error;
public:
    Win32Exception(DWORD error, const string& msg)
        : runtime_error(FormatErrorMessage(error, msg)), m_error(error) { }

    DWORD GetErrorCode() const { return m_error; }
};

void ThrowLastErrorIf(bool expression, const string& msg)
{
    if (expression) {
        throw Win32Exception(GetLastError(), msg);
    }
}

class File
{
private:
    HANDLE m_handle;

    // Declared but not defined, to avoid double closing.
    File& operator=(const File&);
    File(const File&);
public:
    explicit File(const string& filename)
    {
        m_handle = CreateFileA(filename.c_str(), GENERIC_READ, FILE_SHARE_READ,
            nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, nullptr);
        ThrowLastErrorIf(m_handle == INVALID_HANDLE_VALUE,
            "CreateFile call failed on file named " + filename);
    }

    ~File() { CloseHandle(m_handle); }

    HANDLE GetHandle() { return m_handle; }
};

size_t GetFileSizeSafe(const string& filename)
{
    File fobj(filename);
    LARGE_INTEGER filesize;

    BOOL result = GetFileSizeEx(fobj.GetHandle(), &filesize);
    ThrowLastErrorIf(result == FALSE, "GetFileSizeEx failed: " + filename);

    if (filesize.QuadPart < (numeric_limits<size_t>::max)()) {
        return filesize.QuadPart;
    } else {
        throw;
    }
}

vector<char> ReadFileVector(const string& filename)
{
    File fobj(filename);
    size_t filesize = GetFileSizeSafe(filename);
    DWORD bytesRead = 0;

    vector<char> readbuffer(filesize);

    BOOL result = ReadFile(fobj.GetHandle(), readbuffer.data(), readbuffer.size(),
        &bytesRead, nullptr);
    ThrowLastErrorIf(result == FALSE, "ReadFile failed: " + filename);

    cout << filename << " file size: " << filesize << ", bytesRead: "
        << bytesRead << endl;

    return readbuffer;
}

bool IsFileDiff(const string& filename1, const string& filename2)
{
    return ReadFileVector(filename1) != ReadFileVector(filename2);
}

#include <iomanip>

int main ( int argc, char* argv[] )
{
    string filename1("file1.txt");
    string filename2("file2.txt");

    try
    {
        if(argc > 2) {
            filename1 = argv[1];
            filename2 = argv[2];
        }

        cout << "Using file names " << filename1 << " and " << filename2 << endl;

        if (IsFileDiff(filename1, filename2)) {
            cout << "+++ Files are different." << endl;
        } else {
            cout<< "=== Files match." << endl;
        }
    }
    catch(const Win32Exception& e)
    {
        ios state(nullptr);
        state.copyfmt(cout);
        cout << e.what() << endl;
        cout << "Error code: 0x" << hex << uppercase << setw(8) << setfill('0')
            << e.GetErrorCode() << endl;
        cout.copyfmt(state); // restore previous formatting
    }
}
```

## <a name="calling-exceptional-code-from-non-exceptional-code"></a>Chiamata a un codice con eccezioni da un codice senza eccezioni

Le funzioni C++ dichiarate come "extern C" possono essere chiamate da programmi C. I Server COM C++ possono essere utilizzati da codici scritti in vari linguaggi diversi. Quando si implementano in C++ funzioni pubbliche che supportano le eccezioni da chiamare in un codice senza eccezioni, la funzione C++ non deve consentire alle eccezioni di propagarsi fino al chiamante. Pertanto, la funzione C++ deve in particolare intercettare ogni eccezione che è in grado di gestire e se richiesto, convertire l'eccezione in un codice di errore che il chiamante conosce. Se non tutte le potenziali eccezioni sono note, la funzione C++ deve contenere un blocco `catch(...)` come ultimo gestore. In questo caso, si consiglia di segnalare un errore irreversibile al chiamante, perché il programma potrebbe trovarsi in uno stato sconosciuto.

Nell'esempio seguente viene illustrata una funzione che presuppone che qualsiasi eccezione possa essere generata come una Win32Exception o un tipo di eccezione derivato da `std::exception`. La funzione intercetta tutte le eccezioni di questi tipi e propaga fino al chiamante l'informazione sull'errore, come un codice di errore Win32.

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

Quando si convertono le eccezioni in codici di errore, un possibile problema è che i codici di errore spesso non contengono la ricchezza di informazioni che un'eccezione può archiviare. Per risolvere questo problema, è possibile specificare una **catch** blocco per ogni tipo di eccezione specifico che potrebbe essere generata ed esegue la registrazione per registrare i dettagli dell'eccezione prima che venga convertito in un codice di errore. Questo approccio può creare ripetizioni nel codice se più funzioni utilizzano tutte lo stesso set di **catch** blocchi. Un buon metodo per evitare la ripetizione del codice è il refactoring di tali blocchi in un'unica funzione di utilità privata che implementa il **provare** e **catch** blocca e accetta un oggetto funzione che viene richiamato nel **provare** blocco. In ciascuna funzione pubblica passare il codice alla funzione di utilità come un'espressione lambda.

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

Di seguito viene illustrato come scrivere un'espressione lambda che definisce il funtore. Quando un funtore è definito "inline" utilizzando un'espressione lambda, spesso è più facile da leggere rispetto a quanto sarebbe se fosse scritto come un oggetto funzione denominato.

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

Per altre informazioni sulle espressioni lambda, vedere [Espressioni lambda in C++](../cpp/lambda-expressions-in-cpp.md).

## <a name="see-also"></a>Vedere anche

[Gli errori e la gestione delle eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md)<br/>
[Procedura: Progettare la sicurezza dell'eccezione](../cpp/how-to-design-for-exception-safety.md)<br/>
