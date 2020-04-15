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
ms.openlocfilehash: 0c7bf18fa823c6301a79c3f989efa73c9e8f628a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372003"
---
# <a name="overview-of-marshaling-in-ccli"></a>Cenni preliminari sul marshalling in C

In modalità mista, talvolta è necessario eseguire il marshalling dei dati tra tipi nativi e gestiti. La *libreria del marshalling* consente di eseguire il marshalling e convertire i dati in modo semplice.  La libreria di marshalling è costituita da un set di funzioni e da una `marshal_context` classe che eseguono il marshalling per i tipi comuni. La libreria è definita in queste intestazioni nella directory **include/msclr** per l'edizione di Visual Studio:

|Intestazione|Descrizione|
|---------------|-----------------|
|maresciallo.h|`marshal_context`funzioni di marshalling senza classi e senza contesto|
|marshal_atl.h| Funzioni per il marshalling dei tipi ATL|
|marshal_cppstd.h|Funzioni per il marshalling di tipi standard di C|
|marshal_windows.h|Funzioni per il marshalling dei tipi di WindowsFunctions for marshaling Windows types|

Il percorso predefinito per la cartella **msclr** è simile al seguente a seconda dell'edizione in uso e del numero di build:

```cmd
C:\\Program Files (x86)\\Microsoft Visual Studio\\Preview\\Enterprise\\VC\\Tools\\MSVC\\14.15.26528\\include\\msclr
```

È possibile utilizzare la libreria del marshalling con o senza una [classe marshal_context](../dotnet/marshal-context-class.md). Alcune conversioni richiedono un contesto. Altre conversioni possono essere implementate utilizzando la funzione [marshal_as.](../dotnet/marshal-as.md) Nella tabella seguente sono elencate le conversioni correnti supportate, se richiedono un contesto e quale file di marshalling è necessario includere:

|Dal tipo|Per digitare|Metodo Marshal|Includi file|
|---------------|-------------|--------------------|------------------|
|Sistema::Stringa|const char\*|marshal_context|maresciallo.h|
|const char\*|Sistema::Stringa|marshal_as|maresciallo.h|
|Char\*|Sistema::Stringa|marshal_as|maresciallo.h|
|Sistema::Stringa|const wchar_t\*|marshal_context|maresciallo.h|
|const wchar_t \*|Sistema::Stringa|marshal_as|maresciallo.h|
|Wchar_t\*|Sistema::Stringa|marshal_as|maresciallo.h|
|Sistema::IntPtr|HANDLE|marshal_as|marshal_windows.h|
|HANDLE|Sistema::IntPtr|marshal_as|marshal_windows.h|
|Sistema::Stringa|BSTR|marshal_context|marshal_windows.h|
|BSTR|Sistema::Stringa|marshal_as|maresciallo.h|
|Sistema::Stringa|bstr_t|marshal_as|marshal_windows.h|
|bstr_t|Sistema::Stringa|marshal_as|marshal_windows.h|
|Sistema::Stringa|std::stringa|marshal_as|marshal_cppstd.h|
|std::stringa|Sistema::Stringa|marshal_as|marshal_cppstd.h|
|Sistema::Stringa|std::wstring|marshal_as|marshal_cppstd.h|
|std::wstring|Sistema::Stringa|marshal_as|marshal_cppstd.h|
|Sistema::Stringa|> char\<CStringT|marshal_as|marshal_atl.h|
|> char\<CStringT|Sistema::Stringa|marshal_as|marshal_atl.h|
|Sistema::Stringa|> wchar_t<CStringT|marshal_as|marshal_atl.h|
|> wchar_t<CStringT|Sistema::Stringa|marshal_as|marshal_atl.h|
|Sistema::Stringa|Ccombstr|marshal_as|marshal_atl.h|
|Ccombstr|Sistema::Stringa|marshal_as|marshal_atl.h|

Il marshalling richiede un contesto solo quando si esegue il marshalling da tipi di dati gestiti a tipi di dati nativi e il tipo nativo in cui si esegue la conversione non dispone di un distruttore per la pulizia automatica. Il contesto di marshalling elimina il tipo di dati nativo allocato nel distruttore. Pertanto, le conversioni che richiedono un contesto saranno valide solo fino a quando il contesto non viene eliminato. Per salvare i valori di cui è stato eseguito il marshalling, è necessario copiare i valori nelle proprie variabili.

> [!NOTE]
> Se nella `NULL`stringa sono stati incorporati s incorporati, il risultato del marshalling della stringa non è garantito. Gli `NULL`s incorporati possono causare il troncamento della stringa o potrebbero essere mantenuti.

In questo esempio viene illustrato come includere la directory msclr in una dichiarazione di intestazione include:

`#include "msclr\marshal_cppstd.h"`

La libreria del marshalling è estensibile in modo che sia possibile aggiungere tipi di marshalling personalizzati. Per ulteriori informazioni sull'estensione della libreria del marshalling, vedere [Procedura: estendere la libreria](../dotnet/how-to-extend-the-marshaling-library.md)di marshalling .

## <a name="see-also"></a>Vedere anche

[Libreria di supporto di C](../dotnet/cpp-support-library.md)<br/>
[Procedura: estendere la libreria del marshalling](../dotnet/how-to-extend-the-marshaling-library.md)
