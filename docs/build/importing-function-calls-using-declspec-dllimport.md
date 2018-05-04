---
title: L'importazione di chiamate di funzione tramite declspec | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- __declspec
- dllimport
dev_langs:
- C++
helpviewer_keywords:
- importing function calls [C++]
- dllimport attribute [C++], function call imports
- __declspec(dllimport) keyword [C++]
- function calls [C++], importing
ms.assetid: 6b53c616-0c6d-419a-8e2a-d2fff20510b3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1239ee3b33a9d6c8443161bacae6daea20260c1f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="importing-function-calls-using-declspecdllimport"></a>Importazione di chiamate di funzione tramite __declspec(dllimport)
Esempio di codice seguente viene illustrato come utilizzare **_declspec(dllimport)** per importare le chiamate di funzione da una DLL in un'applicazione. Si supponga che `func1` è una funzione che si trova in una DLL separata dal file .exe che contiene il **principale** (funzione).  
  
 Senza **declspec**, dato il seguente codice:  
  
```  
int main(void)   
{  
   func1();  
}  
```  
  
 il compilatore genera codice simile al seguente:  
  
```  
call func1  
```  
  
 e il linker traduce la chiamata in modo analogo al seguente:  
  
```  
call 0x4000000         ; The address of 'func1'.  
```  
  
 Se `func1` esiste in un'altra DLL, il linker non è possibile risolvere questo direttamente perché non ha modo di conoscere quali l'indirizzo di `func1` è. In ambienti a 16 bit, il linker aggiunge questo indirizzo di codice a un elenco di file .exe il caricatore corregge in fase di esecuzione con l'indirizzo corretto. In ambienti a 32 bit e 64 bit, il linker genera un thunk che conosce l'indirizzo. In un ambiente a 32 bit il thunk è simile:  
  
```  
0x40000000:    jmp DWORD PTR __imp_func1  
```  
  
 Qui `imp_func1` è l'indirizzo per il `func1` slot nella tabella di indirizzi di importazione del file .exe. Pertanto, tutti gli indirizzi sono noti al linker. Il caricatore deve solo aggiornare una tabella di indirizzi di importazione del file .exe in fase di caricamento affinché tutto funzioni correttamente.  
  
 Pertanto, l'utilizzo **declspec** è preferibile poiché il linker genera un thunk se non è necessaria. Thunk rendere il codice più grande (nei sistemi RISC, è possibile utilizzare più istruzioni) e può influire negativamente sulle prestazioni della cache. Se si indica al compilatore che è la funzione in una DLL, può generare una chiamata indiretta per l'utente.  
  
 In questo codice:  
  
```  
__declspec(dllimport) void func1(void);  
int main(void)   
{  
   func1();  
}  
```  
  
 Genera l'istruzione:  
  
```  
call DWORD PTR __imp_func1  
```  
  
 È presente alcun thunk e no `jmp` (istruzione), il codice è più veloce e conciso.  
  
 D'altra parte, per le chiamate di funzione all'interno di una DLL, non si desidera utilizzare una chiamata indiretta. Si conosce già l'indirizzo della funzione. Poiché per caricare e archiviare l'indirizzo della funzione prima di una chiamata indiretta, sono necessari tempo e spazio, una chiamata diretta è sempre più veloce e più piccoli. Si desidera utilizzare **declspec** quando si chiama le funzioni DLL dall'esterno della DLL stessa. Non utilizzare **declspec** in funzioni all'interno di una DLL quando si compila una DLL.  
  
## <a name="see-also"></a>Vedere anche  
 [Importazione in un'applicazione](../build/importing-into-an-application.md)