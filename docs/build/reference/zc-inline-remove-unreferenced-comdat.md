---
title: '-Zc: inline (rimuovere COMDAT senza riferimenti) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /Zc:inline
- VC.Project.VCCLCompilerTool.RemoveUnreferencedCodeData
dev_langs: C++
helpviewer_keywords:
- -Zc compiler options (C++)
- /Zc compiler options (C++)
- Zc compiler options (C++)
- /Zc:inline
ms.assetid: a4c94224-1d73-4bea-a9d5-4fa73dc924df
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1c8d14f6055c96f5c9feed16d2ad0b996f0d0b94
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zcinline-remove-unreferenced-comdat"></a>/Zc:inline (rimuovere COMDAT senza riferimenti)
Rimuove le funzioni o i dati COMDAT senza riferimenti o che dispongono solo di collegamenti interni. Quando **/Zc: inline** viene specificato, il compilatore richiede che le unità di conversione che usano dati o le funzioni inline devono includere anche le definizioni per i dati o le funzioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Zc:inline[-]  
```  
  
## <a name="remarks"></a>Note  
 Quando **/Zc: inline** viene specificato, il compilatore non crea le informazioni sui simboli per le funzioni COMDAT senza riferimenti o dati o per le funzioni o dati che hanno un solo collegamento interno. Per impostazione predefinita, questa opzione è disattivata (**/Zc:inline-**). Questa ottimizzazione semplifica parte delle operazioni eseguite dal linker nelle build di rilascio o quando l'opzione del linker [/OPT: ref](../../build/reference/opt-optimizations.md) specificato. Quando il compilatore esegue questa ottimizzazione, può ridurre notevolmente le dimensioni del file .obj e migliorare la velocità del linker. L'opzione del compilatore non è abilitata quando le ottimizzazioni vengono disabilitate ([/Od](../../build/reference/od-disable-debug.md)) o quando [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md) specificato.  
  
 Se **/Zc: inline** è specificato, il compilatore impone il requisito C++ 11 che prevede che tutte le funzioni dichiarate `inline` deve avere una definizione nella stessa unità di conversione se vengono usati. Quando l'opzione non è specificata, [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] consente codice non conforme che richiama funzioni dichiarate `inline` anche se non è visibile una definizione. Per altre informazioni, vedere lo standard C++11 nelle sezioni 3.2 e 7.1.2. Questa opzione del compilatore è stata introdotta in Visual Studio 2013 Update 2.  
  
 Utilizzare il **/Zc: inline** opzione, il codice non conforme di aggiornamento. Questo esempio mostra come l'utilizzo di una dichiarazione di funzione inline senza una definizione non conformi ancora compila collega quando il valore predefinito **/Zc:inline-** viene utilizzata l'opzione:  
  
```cpp  
// example.h  
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp  
#pragma once  
  
class Example {  
public:  
   inline void inline_call(); // declared but not defined inline  
   void normal_call();  
   Example() {};  
};  
```  
  
```cpp  
// example.cpp  
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp  
#include <stdio.h>  
#include "example.h"  
  
void Example::inline_call() {  
   printf("inline_call was called.\n");   
}  
  
void Example::normal_call() {  
   printf("normal_call was called.\n");   
   inline_call(); // with /Zc:inline-, inline_call forced into .obj file  
}  
```  
  
```cpp  
// zcinline.cpp  
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp  
#include "example.h"  
  
void main() {  
   Example example;  
   example.inline_call(); // normal call when definition unavailable  
}  
```  
  
 Quando **/Zc: inline** è abilitato, lo stesso codice provoca un [LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md) errore, perché il compilatore non crea un corpo di codice non inline per `Example::inline_call` in example.obj. In questo modo, la chiamata non inline in `main` farà riferimento a un simbolo esterno non definito.  
  
 Per risolvere questo errore è possibile rimuovere la parola chiave `inline` dalla dichiarazione di `Example::inline_call`, spostare la definizione di `Example::inline_call` nel file di intestazione o spostare l'implementazione di `Example` in main.cpp. L'esempio seguente sposta la definizione nel file di intestazione, in cui è visibile a qualsiasi chiamante che include l'intestazione.  
  
```cpp  
// example2.h  
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp  
#pragma once  
#include <stdio.h>  
  
class Example2 {  
public:  
   inline void inline_call() {  
      printf("inline_call was called.\n");   
   }  
   void normal_call();  
   Example2() {};  
};  
```  
  
```cpp  
// example2.cpp  
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp  
#include "example2.h"  
  
void Example2::normal_call() {  
   printf("normal_call was called.\n");   
   inline_call();   
}  
```  
  
```cpp  
// zcinline2.cpp  
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp  
#include "example2.h"  
  
void main() {  
   Example2 example2;  
   example2.inline_call(); // normal call when definition unavailable  
}  
```  
  
 Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Modificare il **opzioni aggiuntive** proprietà da includere `/Zc:inline` e quindi scegliere **OK**.  
  
## <a name="see-also"></a>Vedere anche  
 [/Zc (conformità)](../../build/reference/zc-conformance.md)