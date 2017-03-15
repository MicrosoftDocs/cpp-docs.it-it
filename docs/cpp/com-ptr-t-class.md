---
title: "Classe _com_ptr_t | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_ptr_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_com_ptr_t (classe)"
ms.assetid: 3753a8a0-03d4-4cfd-8a9a-74872ea53971
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe _com_ptr_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Un oggetto `_com_ptr_t` incapsula un puntatore all'interfaccia COM e viene chiamato un puntatore "intelligente".  Questa classe di modelli gestisce l'allocazione delle risorse e la deallocazione tramite le chiamate alle funzioni del membro: **IUnknown** : `QueryInterface`, `AddRef` e **Release**.  
  
 Una definizione typedef fornita dalla macro **\_COM\_SMARTPTR\_TYPEDEF** di solito fa riferimento a un puntatore intelligente.  Questa macro accetta un nome dell'interfaccia e l'IID e dichiara una specializzazione di `_com_ptr_t` con il nome dell'interfaccia più un suffisso di `Ptr`.  Ad esempio:  
  
```  
_COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));  
```  
  
 dichiara la specializzazione `_com_ptr_t` di **IMyInterfacePtr**.  
  
 Un set di [modelli di funzione](../cpp/relational-function-templates.md), non membri di questa classe modello, supporta confronti con un puntatore intelligente a destra dell'operatore di confronto.  
  
### Costruzione  
  
|||  
|-|-|  
|[\_com\_ptr\_t](../cpp/com-ptr-t-com-ptr-t.md)|Costruisce un oggetto `_com_ptr_t`.|  
  
### Operazioni di basso livello  
  
|||  
|-|-|  
|[AddRef](../cpp/com-ptr-t-addref.md)|Chiama la funzione membro `AddRef` di **IUnknown** sul puntatore a interfaccia incapsulato.|  
|[Connetti](../cpp/com-ptr-t-attach.md)|Incapsula un puntatore a interfaccia raw di questo tipo di puntatore intelligente.|  
|[CreateInstance](../cpp/com-ptr-t-createinstance.md)|Crea una nuova istanza di un oggetto con un **CLSID** o **ProgID** specificato.|  
|[Disconnetti](../cpp/com-ptr-t-detach.md)|Estrae e restituisce un puntatore a interfaccia incapsulato.|  
|[GetActiveObject](../cpp/com-ptr-t-getactiveobject.md)|Esegue l'associazione a un'istanza esistente di un oggetto dato un elemento **CLSID** o **ProgID**.|  
|[GetInterfacePtr](../cpp/com-ptr-t-getinterfaceptr.md)|Restituisce un puntatore a interfaccia incapsulato.|  
|[QueryInterface](../cpp/com-ptr-t-queryinterface.md)|Chiama la funzione membro `QueryInterface` di **IUnknown** sul puntatore a interfaccia incapsulato.|  
|[Release](../cpp/com-ptr-t-release.md)|Chiama la funzione membro **Release** di **IUnknown** sul puntatore a interfaccia incapsulato.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../cpp/com-ptr-t-operator-equal.md)|Assegna un nuovo valore a un oggetto `_com_ptr_t` esistente.|  
|[operatori \=\=, \!\=, \<, \>, \<\=, \>\=](../cpp/com-ptr-t-relational-operators.md)|Confrontare l'oggetto del puntatore intelligente con un altro puntatore intelligente, puntatore a interfaccia raw o **NULL**.|  
|[Estrattori](../cpp/com-ptr-t-extractors.md)|Estrae il puntatore a interfaccia COM incapsulato.|  
  
## Fine sezione specifica Microsoft  
  
## Requisiti  
 **Header:** comip.h  
  
 **Lib:** comsuppw.lib o comsuppwd.lib \(per ulteriori informazioni, vedere [\/Zc:wchar\_t \(Tipo nativo wchar\_t\)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md)\)  
  
## Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)