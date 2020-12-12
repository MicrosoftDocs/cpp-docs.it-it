---
description: 'Altre informazioni su: Panoramica del marshalling in C++/CLI'
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
ms.openlocfilehash: 35294a204d338087a609746e6ae2e5e07ea07b59
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97255535"
---
# <a name="overview-of-marshaling-in-ccli"></a>Cenni preliminari sul marshalling in C++/CLI

In modalità mista è talvolta necessario effettuare il marshalling dei dati tra tipi nativi e gestiti. La *libreria di marshalling* consente di effettuare il marshalling e la conversione dei dati in modo semplice.  La libreria di marshalling è costituita da un set di funzioni e da una `marshal_context` classe che eseguono il marshalling per i tipi comuni. La libreria viene definita in queste intestazioni nella directory **include/msclr** per l'edizione di Visual Studio:

|Intestazione|Description|
|---------------|-----------------|
|Marshal. h|`marshal_context` funzioni di marshalling senza contesto e classe|
|marshal_atl. h| Funzioni per il marshalling di tipi ATL|
|marshal_cppstd. h|Funzioni per il marshalling di tipi C++ standard|
|marshal_windows. h|Funzioni per il marshalling dei tipi di Windows|

Il percorso predefinito per la cartella **msclr** è simile al seguente, a seconda dell'edizione e del numero di build:

```cmd
C:\\Program Files (x86)\\Microsoft Visual Studio\\Preview\\Enterprise\\VC\\Tools\\MSVC\\14.15.26528\\include\\msclr
```

È possibile utilizzare la libreria di marshalling con o senza una [classe marshal_context](../dotnet/marshal-context-class.md). Alcune conversioni richiedono un contesto. È possibile implementare altre conversioni utilizzando la funzione [marshal_as](../dotnet/marshal-as.md) . Nella tabella seguente sono elencate le conversioni correnti supportate, se richiedono un contesto e il file di marshalling da includere:

|Tipo da|Al tipo|Marshal (metodo)|File di inclusione|
|---------------|-------------|--------------------|------------------|
|System:: String ^|carattere const \*|marshal_context|Marshal. h|
|carattere const \*|System:: String ^|marshal_as|Marshal. h|
|char \*|System:: String ^|marshal_as|Marshal. h|
|System:: String ^|wchar_t const\*|marshal_context|Marshal. h|
|const wchar_t \*|System:: String ^|marshal_as|Marshal. h|
|wchar_t \*|System:: String ^|marshal_as|Marshal. h|
|System:: IntPtr|HANDLE|marshal_as|marshal_windows. h|
|HANDLE|System:: IntPtr|marshal_as|marshal_windows. h|
|System:: String ^|BSTR|marshal_context|marshal_windows. h|
|BSTR|System:: String ^|marshal_as|Marshal. h|
|System:: String ^|bstr_t|marshal_as|marshal_windows. h|
|bstr_t|System:: String ^|marshal_as|marshal_windows. h|
|System:: String ^|STD:: String|marshal_as|marshal_cppstd. h|
|STD:: String|System:: String ^|marshal_as|marshal_cppstd. h|
|System:: String ^|std::wstring|marshal_as|marshal_cppstd. h|
|std::wstring|System:: String ^|marshal_as|marshal_cppstd. h|
|System:: String ^|CStringT\<char>|marshal_as|marshal_atl. h|
|CStringT\<char>|System:: String ^|marshal_as|marshal_atl. h|
|System:: String ^|CStringt<wchar_t>|marshal_as|marshal_atl. h|
|CStringt<wchar_t>|System:: String ^|marshal_as|marshal_atl. h|
|System:: String ^|CComBSTR|marshal_as|marshal_atl. h|
|CComBSTR|System:: String ^|marshal_as|marshal_atl. h|

Il marshalling richiede un contesto solo quando si effettua il marshalling da tipi di dati gestiti a nativi e il tipo nativo in cui si esegue la conversione non dispone di un distruttore per la pulizia automatica. Il contesto di marshalling elimina il tipo di dati nativo allocato nel relativo distruttore. Pertanto, le conversioni che richiedono un contesto saranno valide solo fino a quando non viene eliminato il contesto. Per salvare i valori di cui è stato effettuato il marshalling, è necessario copiare i valori nelle variabili personalizzate.

> [!NOTE]
> Se nella stringa sono incorporati `NULL` , non è garantito il risultato del marshalling della stringa. Gli oggetti incorporati `NULL` possono causare il troncamento della stringa o la loro conservazione.

Questo esempio illustra come includere la directory msclr in una dichiarazione di intestazione di inclusione:

`#include "msclr\marshal_cppstd.h"`

La libreria di marshalling è estendibile in modo da poter aggiungere i propri tipi di marshalling. Per ulteriori informazioni sull'estensione della libreria di marshalling, vedere [procedura: estendere la libreria di marshalling](../dotnet/how-to-extend-the-marshaling-library.md).

## <a name="see-also"></a>Vedi anche

[Libreria di supporto per C++](../dotnet/cpp-support-library.md)<br/>
[Procedura: estendere la libreria di marshalling](../dotnet/how-to-extend-the-marshaling-library.md)
