---
title: L'importazione tramite i file DEF | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- importing DLLs [C++], DEF files
- def files [C++], importing with
- .def files [C++], importing with
- dllimport attribute [C++], DEF files
- DLLs [C++], DEF files
ms.assetid: aefdbf50-f603-488a-b0d7-ed737bae311d
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ee213f1aa381415444288dbab4473cae6f5fc7b9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="importing-using-def-files"></a>Importazione tramite i file DEF
Se si sceglie di utilizzare **declspec** insieme a un file con estensione def, è necessario modificare il file. def per utilizzare i dati al posto di costante per ridurre la probabilità che la generazione di codice non corretto causa un problema:  
  
```  
// project.def  
LIBRARY project  
EXPORTS  
   ulDataInDll   DATA  
```  
  
 Nella tabella seguente viene illustrato il motivo.  
  
|Parola chiave|Genera nella libreria di importazione|Esportazioni|  
|-------------|---------------------------------|-------------|  
|`CONSTANT`|`_imp_ulDataInDll`, `_ulDataInDll`|`_ulDataInDll`|  
|`DATA`|`_imp_ulDataInDll`|`_ulDataInDll`|  
  
 Utilizzando **declspec** e costante vengono elencate entrambe le `imp` versione e il nome non decorato in lib DLL importazione della libreria creata per consentire il collegamento esplicito. Utilizzando **declspec** e gli elenchi di dati solo la `imp` versione del nome.  
  
 Se si utilizza una costante, è possibile utilizzare uno dei seguenti costrutti di codice per accedere a `ulDataInDll`:  
  
```  
__declspec(dllimport) ULONG ulDataInDll; /*prototype*/  
if (ulDataInDll == 0L)   /*sample code fragment*/  
```  
  
 oppure  
  
```  
ULONG *ulDataInDll;      /*prototype*/  
if (*ulDataInDll == 0L)  /*sample code fragment*/  
```  
  
 Tuttavia, se si utilizzano i dati nel file def, solo il codice compilato con la seguente definizione può accedere alla variabile `ulDataInDll`:  
  
```  
__declspec(dllimport) ULONG ulDataInDll;  
  
if (ulDataInDll == 0L)   /*sample code fragment*/  
```  
  
 Utilizzo di costante è più rischioso perché se si dimentica di utilizzare un livello supplementare di riferimento indiretto, si potrebbe accedere puntatore della tabella di indirizzi di importazione alla variabile, ovvero non la variabile. Questo tipo di problema può manifestarsi spesso come una violazione di accesso perché la tabella di indirizzi di importazione è attualmente impostata in sola lettura dal compilatore e del linker.  
  
 Il linker corrente di Visual C++ genera un avviso se rileva una costante in un file def per tenere conto per questo caso. L'unico motivo valido per utilizzare CONSTANT è se non è possibile ricompilare un file oggetto in cui il file di intestazione non elenca **declspec** nel prototipo.  
  
## <a name="see-also"></a>Vedere anche  
 [Importazione in un'applicazione](../build/importing-into-an-application.md)
