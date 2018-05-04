---
title: ESPORTAZIONI | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- EXPORTS
dev_langs:
- C++
helpviewer_keywords:
- EXPORTS .def file statement
ms.assetid: dbcd7579-b855-44c4-bd27-931e157657f7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7cc7a9995fdc5be786712752e30015337b9f1607
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="exports"></a>EXPORTS
Introduce una sezione di una o più definizioni di esportazione che specificano i nomi o gli ordinali esportati di funzioni o dati. Ogni definizione deve essere riportata in una riga separata.  
  
```  
EXPORTS  
   definition  
```  
  
## <a name="remarks"></a>Note  
 La prima `definition` può trovarsi nella stessa riga della parola chiave `EXPORTS` o in una riga successiva. Il file con estensione DEF può contenere una o più istruzioni `EXPORTS`.  
  
 La sintassi di una `definition` di esportazione è la seguente:  
  
```  
  
entryname[=internalname] [@ordinal [NONAME]] [[PRIVATE] | [DATA]]  
```  
  
 `entryname` è il nome di funzione o variabile che si vuole esportare ed è obbligatorio. Se il nome da esportare è diverso dal nome nella DLL, specificare il nome dell'esportazione nella DLL usando `internalname`. Se ad esempio la DLL esporta una funzione `func1` e si vuole che i chiamanti la usino come `func2`, specificare:  
  
```  
EXPORTS  
   func2=func1  
```  
  
 Dato che il compilatore di Visual C++ usa la decorazione dei nomi per le funzioni C++, è necessario usare il nome decorato come `entryname` o `internalname` oppure definire le funzioni esportate usando `extern "C"` nel codice sorgente. Il compilatore decora anche le funzioni C che usano il [stdcall](../../cpp/stdcall.md) convenzione con un carattere di sottolineatura (_) come prefisso e un suffisso composto il simbolo di chiocciola (@) seguita dal numero di byte (in decimale) nell'elenco di argomenti.  
  
 Per trovare i nomi decorati creati dal compilatore, usare il [DUMPBIN](../../build/reference/dumpbin-reference.md) strumento o il linker [/Map](../../build/reference/map-generate-mapfile.md) opzione. I nomi decorati sono specifici del compilatore. Se si esportano i nomi decorati nel file .DEF, gli eseguibili che si collegano alla DLL devono essere anch'essi compilati usando la stessa versione del compilatore. Questo garantisce che i nomi decorati nel chiamante corrispondano ai nomi esportati nel file .DEF.  
  
 È possibile usare @`ordinal` per specificare l'inserimento di un numero, invece del nome della funzione, nella tabella di esportazione della DLL. Molte DLL Windows esportano ordinali per supportare il codice legacy. In precedenza, era pratica comune usare ordinali nel codice Windows a 16 bit, perché ciò può aiutare a ridurre le dimensioni di una DLL. Si sconsiglia di esportare funzioni in base a ordinali a meno che i destinatari della DLL non necessitino di tale funzione a scopo di supporto della legacy. Dato che il file .LIB file conterrà il mapping tra l'ordinale e la funzione, è possibile usare il nome della funzione come si farebbe normalmente nei progetti che usano la DLL.  
  
 Usando la parola chiave facoltativa `NONAME`, è possibile esportare solo per ordinali riducendo la dimensione della tabella di esportazione nella DLL risultante. Tuttavia, se si desidera utilizzare [GetProcAddress](http://msdn.microsoft.com/library/windows/desktop/ms683212.aspx) nella DLL, è necessario conoscere il numero ordinale perché il nome non sarà più valido.  
  
 La parola chiave facoltativa `PRIVATE` impedisce l'inclusione di `entryname` nella libreria di importazione generata da LINK. Questa non ha alcun effetto sull'esportazione nell'immagine, anch'essa generata da LINK.  
  
 La parola chiave facoltativa `DATA` specifica che un'esportazione consiste in dati e non in codice. L'esempio seguente illustra come esportare una variabile dati denominata `exported_global`:  
  
```  
EXPORTS  
   exported_global DATA  
```  
  
 Vi sono quattro metodi per esportare una definizione, elencati di seguito in ordine di preferenza.  
  
1.  Il [dllexport](../../cpp/dllexport-dllimport.md) (parola chiave) nel codice sorgente  
  
2.  Un'istruzione `EXPORTS` in un file .DEF  
  
3.  Un [/esportazione](../../build/reference/export-exports-a-function.md) specifica in un comando LINK  
  
4.  Un [commento](../../preprocessor/comment-c-cpp.md) direttiva nel codice sorgente, del form `#pragma comment(linker, "/export: definition ")`  
  
 Tutti e quattro i metodi possono essere usati nello stesso programma. Quando LINK compila un programma che contiene esportazioni, crea anche una libreria di importazione, a meno che non venga usato un file .EXP nella compilazione.  
  
 Di seguito è riportato un esempio di sezione EXPORTS:  
  
```  
EXPORTS  
   DllCanUnloadNow      @1          PRIVATE  
   DllWindowName = WindowName       DATA  
   DllGetClassObject    @4 NONAME   PRIVATE  
   DllRegisterServer    @7  
   DllUnregisterServer  
```  
  
 Quando si esporta una variabile da una DLL usando un file .DEF, non è necessario specificare `__declspec(dllexport)` nella variabile. In qualsiasi file che usa la DLL, tuttavia, è comunque necessario usare `__declspec(dllimport)` nella dichiarazione dei dati.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)