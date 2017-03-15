---
title: "Importazione tramite i file DEF | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".def (file) [C++], importazione"
  - "file def [C++], importazione"
  - "attributo dllimport [C++], DEF (file)"
  - "DLL [C++], DEF (file)"
  - "importazione di DLL [C++], DEF (file)"
ms.assetid: aefdbf50-f603-488a-b0d7-ed737bae311d
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Importazione tramite i file DEF
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si decide di utilizzare **\_\_declspec\(dllimport\)** con un file def, occorre modificare quest'ultimo in modo da utilizzare DATA anziché CONSTANT allo scopo di ridurre la probabilità che si verifichi un problema a causa del codice errato:  
  
```  
// project.def  
LIBRARY project  
EXPORTS  
   ulDataInDll   DATA  
```  
  
 Nella tabella riportata di seguito sono illustrati i motivi di questa scelta:  
  
|Parola chiave|Genera nella libreria di importazione|Esporta|  
|-------------------|-------------------------------------------|-------------|  
|`CONSTANT`|`_imp_ulDataInDll_ulDataInDll`|`_ulDataInDll`|  
|`DATA`|`_imp_ulDataInDll`|`_ulDataInDll`|  
  
 L'utilizzo di **\_\_declspec\(dllimport\)** e di CONSTANT consente di elencare sia la versione `imp` che il nome non decorato nella libreria di importazione della DLL \(lib\) creata per consentire il collegamento esplicito.  Se si utilizza **\_\_declspec\(dllimport\)** e DATA viene elencata solo la versione `imp` del nome.  
  
 Se si utilizza CONSTANT, è possibile utilizzare uno dei seguenti costrutti di codice per accedere a `ulDataInDll`:  
  
```  
__declspec(dllimport) ULONG ulDataInDll; /*prototype*/  
if (ulDataInDll == 0L)   /*sample code fragment*/  
```  
  
 \- oppure \-  
  
```  
ULONG *ulDataInDll;      /*prototype*/  
if (*ulDataInDll == 0L)  /*sample code fragment*/  
```  
  
 Se tuttavia si utilizza DATA nel file def, soltanto il codice compilato con la seguente definizione può accedere alla variabile `ulDataInDll`:  
  
```  
__declspec(dllimport) ULONG ulDataInDll;  
  
if (ulDataInDll == 0L)   /*sample code fragment*/  
```  
  
 L'uso di CONSTANT è più rischioso perché, se non si utilizza il livello aggiuntivo di riferimento indiretto, è possibile che si acceda al puntatore alla variabile nella tabella di indirizzi di importazione e non alla variabile vera e propria.  Questo tipo di problema può manifestarsi spesso come violazione di accesso poiché la tabella IAT è attualmente impostata in sola lettura dal compilatore e dal linker.  
  
 Per segnalare questa situazione, il linker corrente di Visual C\+\+ invia un messaggio di avviso se individua CONSTANT nel file def.  L'unico motivo valido per utilizzare CONSTANT è dato dall'impossibilità di ricompilare un file oggetto in cui il file di intestazione non elenca **\_\_declspec\(dllimport\)** nel prototipo.  
  
## Vedere anche  
 [Importazione in un'applicazione](../build/importing-into-an-application.md)