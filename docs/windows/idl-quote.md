---
title: "idl_quote | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.idl_quote"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "idl_quote attribute"
ms.assetid: a370e1b7-948b-4e67-9a25-58facf24e4c9
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# idl_quote
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di utilizzare i costrutti di IDL non sono supportati nella versione corrente di Visual C\+\+ e li sufficiente passare al file generato con estensione .idl.  
  
## Sintassi  
  
```  
  
      [ idl_quote(  
   text  
) ]  
```  
  
#### Parametri  
 *text*  
 Il nome di attributo che si prevede che il compilatore di Visual C\+\+ per passare al file generato con estensione .idl senza restituire un errore del compilatore.  
  
## Note  
 se **idl\_quote** L'attributo di C\+\+ viene utilizzato come attributo autonomo \(con un punto e virgola dopo la parentesi di chiusura\), quindi testo viene inserito nel file fuso IDL come è.  se **idl\_quote** viene utilizzato su un simbolo, testo viene posizionato nel blocco di attributi per tale simbolo.  
  
## Esempio  
 Nel codice seguente viene illustrato come è possibile specificare un attributo non supportato \(che utilizzano **in**, che è supportato\) e come definire e utilizzare un costrutto non definito con estensione .idl:  
  
```  
// cpp_attr_ref_idl_quote.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLibrary")];  
  
[export]  
struct MYFLOT {  
   int i;  
};  
  
[export]  
struct MYDUB {  
   int i;  
};  
  
[idl_quote("typedef union _S1_TYPE switch (long l1) U1_TYPE { case 1024: \  
struct MYFLOT f1; case 2048: struct MYDUB d2; } S1_TYPE;") ];  
  
typedef struct _S1_TYPE {   
   long l1;   
  
union {   
   MYFLOT f1; MYDUB d2; } U1_TYPE;   
} S1_TYPE;  
  
[uuid("2F5F63F1-16DA-11d2-9E7B-00C04FB926DA"), object]  
__interface IStatic{  
   HRESULT Func1([idl_quote("in")] int i);  
   HRESULT func( S1_TYPE* myStruct );  
};  
```  
  
 Questo codice provoca MYFLOT e MYDUB e *testo* voce da inserire nel file generato con estensione .idl.  *nome* vantaggi di parametro *testo* per essere inserito prima di tutto ciò che faccia riferimento *nome* nel file generato con estensione .idl.  *dipendenze* il parametro forza le definizioni di elenco di dipendenza da inserire prima *testo* nel file generato con estensione .idl.  
  
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
 [IDL Attributes](../windows/idl-attributes.md)   
 [Stand\-Alone Attributes](../windows/stand-alone-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)