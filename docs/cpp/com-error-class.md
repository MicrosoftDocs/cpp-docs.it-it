---
title: "Classe _com_error | Microsoft Docs"
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
  - "_com_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_com_error (classe)"
ms.assetid: 70dafa69-b1fb-4a5c-9249-e857e0793d42
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe _com_error
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Un oggetto `_com_error` rappresenta uno stato di errore rilevato dalle funzioni wrapper di gestione degli errori nei file di intestazione generati dalla libreria dei tipi o da una delle classi di supporto COM.  La classe `_com_error` incapsula il codice di errore `HRESULT` e qualsiasi oggetto collegato `IErrorInfo Interface`.  
  
### Costruzione  
  
|||  
|-|-|  
|[\_com\_error](../cpp/com-error-com-error.md)|Costruisce un oggetto `_com_error`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore \=](../cpp/com-error-operator-equal.md)|Assegna un oggetto esistente `_com_error` ad un altro.|  
  
### Funzioni Estrattore  
  
|||  
|-|-|  
|[delle modifiche a..."](../cpp/com-error-error.md)|Recupera l'`HRESULT` passato al costruttore.|  
|[ErrorInfo](../cpp/com-error-errorinfo.md)|Recupera l'oggetto `IErrorInfo` passato al costruttore.|  
|[WCode](../cpp/com-error-wcode.md)|Recupera il codice di errore a 16 bit mappato nell'incapsulato `HRESULT`.|  
  
### Funzioni IErrorInfo  
  
|||  
|-|-|  
|[Descrizione](../cpp/com-error-description.md)|Chiamate alla funzione `IErrorInfo::GetDescription`.|  
|[HelpContext](../cpp/com-error-helpcontext.md)|Chiamate alla funzione `IErrorInfo::GetHelpContext`.|  
|[HelpFile](../cpp/com-error-helpfile.md)|Chiamate alla funzione `IErrorInfo::GetHelpFile`|  
|[Origine](../cpp/com-error-source.md)|Chiamate alla funzione `IErrorInfo::GetSource`.|  
|[GUID](../cpp/com-error-guid.md)|Chiamate alla funzione `IErrorInfo::GetGUID`.|  
  
### Estrattore del Messaggio di Formato  
  
|||  
|-|-|  
|[ErrorMessage](../cpp/com-error-errormessage.md)|Recupera il messaggio stringa per HRESULT archiviato nell'oggetto `_com_error`.|  
  
### ExepInfo.wCode alle utilità di mapping di HRESULT  
  
|||  
|-|-|  
|[HRESULTToWCode](../cpp/com-error-hresulttowcode.md)|Esegue il mapping da 32 bit `HRESULT` a 16 bit `wCode`.|  
|[WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)|Esegue il mapping da 16 bit `wCode` a 32 bit `HRESULT`.|  
  
## Specifica END Microsoft  
  
## Requisiti  
 `Header:` comdef.h  
  
 `Lib:` comsuppw.lib o comsuppwd.lib \(vedere [\/Zc:wchar\_t \(Tipo nativo wchar\_t\)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per ulteriori informazioni\)  
  
## Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)   
 [IErrorInfo Interface](http://msdn.microsoft.com/it-it/4dda6909-2d9a-4727-ae0c-b5f90dcfa447)