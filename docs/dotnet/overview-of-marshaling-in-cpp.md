---
title: Panoramica del marshalling in C++
ms.date: 07/12/2019
ms.topic: reference
f1_keywords:
- marshaling
- marshalling
helpviewer_keywords:
- Visual C++, marshaling
- C++ Support Library, marshaling
- marshaling, about marshaling
ms.assetid: 997dd4bc-5f98-408f-b890-f35de9ce3bb8
ms.openlocfilehash: 937fbdf4b3ed09344e69a8f1eb731565c36794ae
ms.sourcegitcommit: 0e3da5cea44437c132b5c2ea522bd229ea000a10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/12/2019
ms.locfileid: "70311731"
---
# <a name="overview-of-marshaling-in-ccli"></a>Panoramica del marshalling in C++/CLI

In modalità mista è talvolta necessario effettuare il marshalling dei dati tra tipi nativi e gestiti. La *libreria di marshalling* consente di effettuare il marshalling e la conversione dei dati in modo semplice.  La libreria di marshalling è costituita da un set di `marshal_context` funzioni e da una classe che eseguono il marshalling per i tipi comuni. La libreria viene definita in queste intestazioni nella directory **include/msclr** per l'edizione di Visual Studio:

|Intestazione|DESCRIZIONE|
|---------------|-----------------|
|Marshal. h|`marshal_context`funzioni di marshalling senza contesto e classe|
|marshal_atl.h| Funzioni per il marshalling di tipi ATL|
|marshal_cppstd.h|Funzioni per il marshalling C++ dei tipi standard|
|marshal_windows. h|Funzioni per il marshalling dei tipi di Windows|

Il percorso predefinito per la cartella **msclr** è simile al seguente, a seconda dell'edizione e del numero di build:

```cmd
C:\\Program Files (x86)\\Microsoft Visual Studio\\Preview\\Enterprise\\VC\\Tools\\MSVC\\14.15.26528\\include\\msclr
```

È possibile utilizzare la libreria di marshalling con o senza una [Classe marshal_context](../dotnet/marshal-context-class.md). Alcune conversioni richiedono un contesto. Altre conversioni possono essere implementate tramite la funzione [marshal_as](../dotnet/marshal-as.md) . Nella tabella seguente sono elencate le conversioni correnti supportate, se richiedono un contesto e il file di marshalling da includere:

|Tipo da|Al tipo|Marshal (metodo)|File di inclusione|
|---------------|-------------|--------------------|------------------|
|System:: String ^|carattere const\*|marshal_context|Marshal. h|
|carattere const\*|System:: String ^|marshal_as|Marshal. h|
|char\*|System:: String ^|marshal_as|Marshal. h|
|System:: String ^|wchar_t const\*|marshal_context|Marshal. h|
|wchar_t const\*|System:: String ^|marshal_as|Marshal. h|
|wchar_t\*|System:: String ^|marshal_as|Marshal. h|
|System::IntPtr|HANDLE|marshal_as|marshal_windows. h|
|HANDLE|System::IntPtr|marshal_as|marshal_windows. h|
|System:: String ^|BSTR|marshal_context|marshal_windows. h|
|BSTR|System:: String ^|marshal_as|Marshal. h|
|System:: String ^|bstr_t|marshal_as|marshal_windows. h|
|bstr_t|System:: String ^|marshal_as|marshal_windows. h|
|System:: String ^|STD:: String|marshal_as|marshal_cppstd.h|
|STD:: String|System:: String ^|marshal_as|marshal_cppstd.h|
|System:: String ^|STD:: wstring|marshal_as|marshal_cppstd.h|
|STD:: wstring|System:: String ^|marshal_as|marshal_cppstd.h|
|System:: String ^|CStringT\<char>|marshal_as|marshal_atl.h|
|CStringT\<char>|System:: String ^|marshal_as|marshal_atl.h|
|System:: String ^|CStringT<wchar_t>|marshal_as|marshal_atl.h|
|CStringT<wchar_t>|System:: String ^|marshal_as|marshal_atl.h|
|System:: String ^|CComBSTR|marshal_as|marshal_atl.h|
|CComBSTR|System:: String ^|marshal_as|marshal_atl.h|

Il marshalling richiede un contesto solo quando si effettua il marshalling da tipi di dati gestiti a nativi e il tipo nativo in cui si esegue la conversione non dispone di un distruttore per la pulizia automatica. Il contesto di marshalling elimina il tipo di dati nativo allocato nel relativo distruttore. Pertanto, le conversioni che richiedono un contesto saranno valide solo fino a quando non viene eliminato il contesto. Per salvare i valori di cui è stato effettuato il marshalling, è necessario copiare i valori nelle variabili personalizzate.

> [!NOTE]
>  Se nella stringa sono `NULL`incorporati, non è garantito il risultato del marshalling della stringa. Gli oggetti `NULL`incorporati possono causare il troncamento della stringa o la loro conservazione.

Questo esempio illustra come includere la directory msclr in una dichiarazione di intestazione di inclusione:

`#include "msclr\marshal_cppstd.h"`

La libreria di marshalling è estendibile in modo da poter aggiungere i propri tipi di marshalling. Per ulteriori informazioni sull'estensione della libreria di marshalling, [vedere Procedura: Estendere la libreria](../dotnet/how-to-extend-the-marshaling-library.md)di marshalling.

## <a name="see-also"></a>Vedere anche

[Libreria di supporto per C++](../dotnet/cpp-support-library.md)<br/>
[Procedura: Estendere la libreria del marshalling](../dotnet/how-to-extend-the-marshaling-library.md)
