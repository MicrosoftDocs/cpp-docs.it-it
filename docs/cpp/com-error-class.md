---
title: classe com_error | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error
dev_langs:
- C++
helpviewer_keywords:
- _com_error class
ms.assetid: 70dafa69-b1fb-4a5c-9249-e857e0793d42
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 60fc445d51cfa72a6c72984ff19b877d916ded53
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39407761"
---
# <a name="comerror-class"></a>Classe _com_error
**Sezione specifica Microsoft**  
  
 Oggetto **com_error** oggetto rappresenta una condizione di eccezione rilevata dalle funzioni wrapper di gestione degli errori nei file di intestazione generati dalla libreria dei tipi o da una delle classi di supporto COM. Il **com_error** classe incapsula il codice di errore HRESULT e tutte le proprietà associate `IErrorInfo Interface` oggetto.  
  
### <a name="construction"></a>Costruzione  
  
|||  
|-|-|  
|[_com_error](../cpp/com-error-com-error.md)|Costruisce un **com_error** oggetto.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](../cpp/com-error-operator-equal.md)|Assegna un oggetto esistente **com_error** oggetto a altro.|  
  
### <a name="extractor-functions"></a>Funzioni di estrazione  
  
|||  
|-|-|  
|[Erroree](../cpp/com-error-error.md)|Recupera il valore HRESULT passato al costruttore.|  
|[ErrorInfo](../cpp/com-error-errorinfo.md)|Recupera il `IErrorInfo` oggetto passato al costruttore.|  
|[wCode](../cpp/com-error-wcode.md)|Recupera il codice di errore a 16 bit mappato in HRESULT incapsulato.|  
  
### <a name="ierrorinfo-functions"></a>Funzioni di IErrorInfo  
  
|||  
|-|-|  
|[Descrizione](../cpp/com-error-description.md)|Le chiamate `IErrorInfo::GetDescription` (funzione).|  
|[HelpContext](../cpp/com-error-helpcontext.md)|Le chiamate `IErrorInfo::GetHelpContext` (funzione).|  
|[HelpFile](../cpp/com-error-helpfile.md)|Le chiamate `IErrorInfo::GetHelpFile` (funzione)|  
|[Source](../cpp/com-error-source.md)|Le chiamate `IErrorInfo::GetSource` (funzione).|  
|[GUID](../cpp/com-error-guid.md)|Le chiamate `IErrorInfo::GetGUID` (funzione).|  
  
### <a name="format-message-extractor"></a>Formato messaggio estrattore  
  
|||  
|-|-|  
|[Messaggio di errore](../cpp/com-error-errormessage.md)|Recupera il messaggio stringa per HRESULT archiviate nel **com_error** oggetto.|  
  
### <a name="exepinfowcode-to-hresult-mappers"></a>ExepInfo.wCode per i Mapper HRESULT  
  
|||  
|-|-|  
|[HRESULTToWCode](../cpp/com-error-hresulttowcode.md)|Esegue il mapping di HRESULT a 32 bit a 16 bit `wCode`.|  
|[WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)|Esegue il mapping a 16 bit `wCode` a 32 bit HRESULT.|  
  
**Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<Comdef. h >  
  
 `Lib:` comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (wchar_t Is tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per altre informazioni)  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)   
 [Interfaccia IErrorInfo](http://msdn.microsoft.com/4dda6909-2d9a-4727-ae0c-b5f90dcfa447)