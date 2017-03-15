---
title: "cpp_quote | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.cpp_quote"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cpp_quote attribute"
ms.assetid: f75327ff-42bd-498b-9177-7ffa25427e1f
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# cpp_quote
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera la stringa specificata, senza i caratteri virgoletta, nel file generato con estensione .idl.  
  
## Sintassi  
  
```  
  
      [ cpp_quote(  
   "statement"  
) ];  
```  
  
#### Parametri  
 *statement*  
 Istruzione di tipo c.  
  
## Note  
 **cpp\_quote** L'attributo C\+\+ è utile se si desidera inserire una direttiva per il preprocessore in un file idl.  
  
 È inoltre possibile utilizzare **cpp\_quote** e generare un file con estensione h come parte della compilazione MIDL.  Ad esempio, se si dispone di file di intestazione C\+\+ che utilizza gli attributi C\+\+ IDL ma non è possibile utilizzare questo file per alcune attività, è possibile compilarlo per creare un file generato da MIDL h, che è possibile utilizzare.  
  
 **cpp\_quote** l'attributo presenta la stessa funzionalità di  [cpp\_quote](http://msdn.microsoft.com/library/windows/desktop/aa366765) Attributo MIDL.  
  
## Esempio  
 Vedere l'esempio relativo a [raddoppiar](../windows/dual.md) per un esempio utilizzare come utilizzare  **cpp\_quote**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Stand\-Alone Attributes](../windows/stand-alone-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)