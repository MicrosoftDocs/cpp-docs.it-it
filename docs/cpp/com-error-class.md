---
title: classe com_error | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _com_error
dev_langs: C++
helpviewer_keywords: _com_error class
ms.assetid: 70dafa69-b1fb-4a5c-9249-e857e0793d42
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 47ee4686c5c0a239b868d6da9aaccc332def19dc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="comerror-class"></a>Classe _com_error
**Sezione specifica Microsoft**  
  
 Oggetto `_com_error` oggetto rappresenta una condizione di eccezione rilevata dalle funzioni wrapper di gestione degli errori nei file di intestazione generati dalla libreria dei tipi o da una delle classi di supporto COM. Il `_com_error` classe incapsula il `HRESULT` codice di errore e i relativi `IErrorInfo Interface` oggetto.  
  
### <a name="construction"></a>Costruzione  
  
|||  
|-|-|  
|[com_error](../cpp/com-error-com-error.md)|Costruisce un oggetto `_com_error`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](../cpp/com-error-operator-equal.md)|Assegnare un oggetto `_com_error` esistente a un altro.|  
  
### <a name="extractor-functions"></a>Funzioni di estrazione  
  
|||  
|-|-|  
|[Erroree](../cpp/com-error-error.md)|Recupera l'elemento `HRESULT` passato al costruttore.|  
|[ErrorInfo](../cpp/com-error-errorinfo.md)|Recupera il `IErrorInfo` oggetto passato al costruttore.|  
|[WCode](../cpp/com-error-wcode.md)|Recupera il codice di errore a 16 bit il cui mapping si trova in `HRESULT` incapsulato.|  
  
### <a name="ierrorinfo-functions"></a>Funzioni di IErrorInfo  
  
|||  
|-|-|  
|[Descrizione](../cpp/com-error-description.md)|Chiamate `IErrorInfo::GetDescription` (funzione).|  
|[HelpContext](../cpp/com-error-helpcontext.md)|Chiamate `IErrorInfo::GetHelpContext` (funzione).|  
|[HelpFile](../cpp/com-error-helpfile.md)|Chiamate `IErrorInfo::GetHelpFile` (funzione)|  
|[Source](../cpp/com-error-source.md)|Chiamate `IErrorInfo::GetSource` (funzione).|  
|[GUID](../cpp/com-error-guid.md)|Chiamate `IErrorInfo::GetGUID` (funzione).|  
  
### <a name="format-message-extractor"></a>Estrazione del formato messaggio  
  
|||  
|-|-|  
|[Messaggio di errore](../cpp/com-error-errormessage.md)|Recupera il messaggio stringa per HRESULT archiviata nel `_com_error` oggetto.|  
  
### <a name="exepinfowcode-to-hresult-mappers"></a>ExepInfo.wCode a BizTalk Mapper HRESULT  
  
|||  
|-|-|  
|[HRESULTToWCode](../cpp/com-error-hresulttowcode.md)|Esegue il mapping a 32 bit `HRESULT` a 16 bit `wCode`.|  
|[WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)|Esegue il mapping di `wCode` a 16 bit a `HRESULT` a 32 bit.|  
  
**Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Comdef. h  
  
 `Lib:`comsuppw.lib o comsuppwd.lib (vedere [/Zc: wchar_t (wchar_t è il tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per altre informazioni)  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)   
 [Interfaccia IErrorInfo](http://msdn.microsoft.com/en-us/4dda6909-2d9a-4727-ae0c-b5f90dcfa447)