---
title: "emitidl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.emitidl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "emitidl attribute"
ms.assetid: 85b80c56-578e-4392-ac03-8443c74ebb7d
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# emitidl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Determina se tutti gli attributi successivi IDL saranno elaborati e inseriti nel file generato con estensione .idl.  
  
## Sintassi  
  
```  
  
      [ emitidl([boolean],  
   defaultimports=[boolean]  
) ] ;  
```  
  
#### Parametri  
 `boolean`  
 valori possibili: **true**,  **false**,  **imposto**,  **limitato**,  **richiedere**, o  **pop**.  
  
-   se **true**, tutti gli attributi di categoria IDL rilevati in un file di codice sorgente verranno inseriti nel file generato con estensione .idl.  Questa è l'impostazione predefinita per **emitidl**.  
  
-   se **false**, alcuni attributi di categoria IDL rilevati in un file di codice sorgente non verranno inseriti nel file generato con estensione .idl.  
  
-   se **limitato**, agli attributi IDL siano nel file senza  [modulo](../windows/module-cpp.md) attributo.  Il compilatore non genererà un file idl.  
  
-   se **imposto**, esegue l'override di un successivo  **limitato** attributo, che richiede un file di disporre di una classe  **modulo** attributo eventuali attributi IDL nel file.  
  
-   **richiedere** consente di salvare l'oggetto corrente  **emitidl** impostazioni in un inner  **emitidl** stack e  **pop** consente di impostare  **emitidl** qualsiasi valore corrisponde all'inizio dell'argomento interno  **emitidl** stack.  
  
 **defaultimports**\=\[  `boolean`\] \(facoltativo\)  
 -   se `boolean` viene  **true**, docobj.idl verrà incluso nel file generato con estensione .idl.  Inoltre, se un file IDL con lo stesso nome come un file con estensione h che si `#include` nel codice sorgente è presente nella stessa directory del file h, il file generato con estensione .idl conterranno istruzione Import per il file IDL.  
  
-   se `boolean` viene  **false**, docobj.idl non verrà incluso nel file generato con estensione .idl.  Sarà necessario in modo esplicito importare i file IDL con [importazione](../windows/import.md).  
  
## Note  
 dopo **emitidl** L'attributo di C\+\+ viene rilevato in un file di codice sorgente, attributi di categoria IDL verrà inserito nel file generato con estensione .idl.  Se c " è alcun **emitidl** l'attributo, attributi IDL nel file di codice sorgente verrà restituito al file generato con estensione .idl.  
  
 È possibile avere più **emitidl** attributi in un file di codice sorgente.  se `[emitidl(false)];` viene rilevato in un file senza un successivo  `[emitidl(true)];`, quindi nessun attributo verrà elaborato nel file generato con estensione .idl.  
  
 Quando il compilatore rileva un nuovo file, **emitidl** viene implicitamente impostato su  **true**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [Stand\-Alone Attributes](../windows/stand-alone-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)