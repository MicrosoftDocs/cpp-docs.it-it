---
title: "idl_module | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.idl_module"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "idl_module attribute"
ms.assetid: 3578b337-e38a-4334-b747-15404c02dbc0
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# idl_module
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica un punto di ingresso in un file DLL.  
  
## Sintassi  
  
```  
  
      [ idl_module (   
   name=module_name,   
   dllname=dll,   
   uuid="uuid",   
   helpstring="help text",   
   helpstringcontext=helpcontextID,   
   helpcontext=helpcontext,   
   hidden,   
   restricted  
) ]  
function declaration  
```  
  
#### Parametri  
 **nome**  
 Un nome definito dall'utente per il blocco di codice che verrà visualizzato nel file IDL.  
  
 **nomedll** \(facoltativo\)  
 Il file DLL che contiene l'esportazione.  
  
 `uuid` \(facoltativo\)  
 ID univoco.  
  
 **viene copiato nella helpstring** \(facoltativo\)  
 Una stringa di caratteri utilizzata per descrivere la libreria dei tipi.  
  
 **helpstringcontext** \(facoltativo\)  
 L'ID di un argomento della Guida in un file CHM o di .hlp.  
  
 **helpcontext** \(facoltativo\)  
 La guida all'ID della libreria dei tipi.  
  
 **nascosto** \(facoltativo\)  
 Un parametro che impedisce la raccolta da visualizzare.  vedere [nascosto](http://msdn.microsoft.com/library/windows/desktop/aa366861) Attributo MIDL per ulteriori informazioni.  
  
 ***limitato***  \(facoltativo\)  
 I membri della raccolta non possono essere chiamati in modo arbitrario.  vedere [limitato](http://msdn.microsoft.com/library/windows/desktop/aa367157) Attributo MIDL per ulteriori informazioni.  
  
 *dichiarazione di funzione*  
 La funzione che verrà definita.  
  
## Note  
 `idl_module` L'attributo di C\+\+ consente di specificare il punto di ingresso in un file DLL, che consente di importare da un file DLL.  
  
 **idl\_module** l'attributo presenta funzionalità simile a  [modulo](http://msdn.microsoft.com/library/windows/desktop/aa367099) Attributo MIDL.  
  
 È possibile esportare qualsiasi elemento da un oggetto COM che è possibile esportare da un file DLL inserendo un punto di ingresso della DLL nel blocco di libreria di file IDL.  
  
 L'utilizzo di imperativo `idl_module` in due passaggi.  Innanzitutto, è necessario definire una coppia di stato o DLL.  Quindi, quando si utilizzano `idl_module` per specificare un punto di ingresso, specificare il nome e tutti gli attributi aggiuntivi.  
  
## Esempio  
 Nel codice seguente viene illustrato come utilizzare `idl_module` attributo:  
  
```  
// cpp_attr_ref_idl_module.cpp  
// compile with: /LD  
[idl_quote("midl_pragma warning(disable:2461)")];  
[module(name="MyLibrary"), idl_module(name="MyLib", dllname="xxx.dll")];  
[idl_module(name="MyLib"), entry(4), usesgetlasterror]  
void FuncName(int i);  
```  
  
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
 [entry](../windows/entry.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)