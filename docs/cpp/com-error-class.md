---
title: Classe _com_error
ms.date: 11/04/2016
f1_keywords:
- _com_error
helpviewer_keywords:
- _com_error class
ms.assetid: 70dafa69-b1fb-4a5c-9249-e857e0793d42
ms.openlocfilehash: 828a1ec68fef631700d5b64e6aeeec6660acf9a8
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498737"
---
# <a name="_com_error-class"></a>Classe _com_error

**Sezione specifica Microsoft**

Un oggetto **_com_error** rappresenta una condizione di eccezione rilevata dalle funzioni wrapper di gestione degli errori nei file di intestazione generati dalla libreria dei tipi o da una delle classi di supporto com. La classe **_com_error** incapsula il codice di errore HRESULT e qualsiasi oggetto `IErrorInfo Interface` associato.

### <a name="construction"></a>Costruzione

|||
|-|-|
|[_com_error](../cpp/com-error-com-error.md)|Costruisce un oggetto **_com_error** .|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore =](../cpp/com-error-operator-equal.md)|Assegna un oggetto **_com_error** esistente a un altro oggetto.|

### <a name="extractor-functions"></a>Funzioni Extractor

|||
|-|-|
|[Erroree](../cpp/com-error-error.md)|Recupera il valore HRESULT passato al costruttore.|
|[ErrorInfo](../cpp/com-error-errorinfo.md)|Recupera l' `IErrorInfo` oggetto passato al costruttore.|
|[WCode](../cpp/com-error-wcode.md)|Recupera il codice di errore a 16 bit mappato nell'HRESULT incapsulato.|

### <a name="ierrorinfo-functions"></a>Funzioni IErrorInfo

|||
|-|-|
|[Descrizione](../cpp/com-error-description.md)|Chiama `IErrorInfo::GetDescription` la funzione.|
|[HelpContext](../cpp/com-error-helpcontext.md)|Chiama `IErrorInfo::GetHelpContext` la funzione.|
|[HelpFile](../cpp/com-error-helpfile.md)|Funzione `IErrorInfo::GetHelpFile` calls|
|[Origine](../cpp/com-error-source.md)|Chiama `IErrorInfo::GetSource` la funzione.|
|[GUID](../cpp/com-error-guid.md)|Chiama `IErrorInfo::GetGUID` la funzione.|

### <a name="format-message-extractor"></a>Formato estrattore messaggi

|||
|-|-|
|[ErrorMessage](../cpp/com-error-errormessage.md)|Recupera il messaggio stringa per HRESULT archiviato nell'oggetto **_com_error** .|

### <a name="exepinfowcode-to-hresult-mappers"></a>ExepInfo. wCode a Mapper HRESULT

|||
|-|-|
|[HRESULTToWCode](../cpp/com-error-hresulttowcode.md)|Esegue il mapping di HRESULT a 32 bit a `wCode`16 bit.|
|[WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)|Esegue il mapping di `wCode` un HRESULT a 16 bit a 32 bit.|

**Fine sezione specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> Comdef. h

`Lib:`comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (tipo nativo wchar_t)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per altre informazioni)

## <a name="see-also"></a>Vedere anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)<br/>
[IErrorInfo (interfaccia)](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo)