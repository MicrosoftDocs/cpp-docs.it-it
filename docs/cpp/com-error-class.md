---
title: Classe _com_error
ms.date: 11/04/2016
f1_keywords:
- _com_error
helpviewer_keywords:
- _com_error class
ms.assetid: 70dafa69-b1fb-4a5c-9249-e857e0793d42
ms.openlocfilehash: 0c33791fbe6011a3eddc6e535a3a4ed838e5e06c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180810"
---
# <a name="_com_error-class"></a>Classe _com_error

**Sezione specifica Microsoft**

Un oggetto **_com_error** rappresenta una condizione di eccezione rilevata dalle funzioni wrapper di gestione degli errori nei file di intestazione generati dalla libreria dei tipi o da una delle classi di supporto com. La classe **_com_error** incapsula il codice di errore HRESULT e qualsiasi oggetto `IErrorInfo Interface` associato.

### <a name="construction"></a>Costruzioni

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
|[Error (Errore) (Error (Errore)e)](../cpp/com-error-error.md)|Recupera il valore HRESULT passato al costruttore.|
|[ErrorInfo](../cpp/com-error-errorinfo.md)|Recupera il `IErrorInfo` oggetto passato al costruttore.|
|[WCode](../cpp/com-error-wcode.md)|Recupera il codice di errore a 16 bit mappato nell'HRESULT incapsulato.|

### <a name="ierrorinfo-functions"></a>Funzioni IErrorInfo

|||
|-|-|
|[Descrizione](../cpp/com-error-description.md)|Chiama `IErrorInfo::GetDescription` funzione.|
|[HelpContext](../cpp/com-error-helpcontext.md)|Chiama `IErrorInfo::GetHelpContext` funzione.|
|[HelpFile](../cpp/com-error-helpfile.md)|Chiama `IErrorInfo::GetHelpFile` funzione|
|[Origine](../cpp/com-error-source.md)|Chiama `IErrorInfo::GetSource` funzione.|
|[GUID](../cpp/com-error-guid.md)|Chiama `IErrorInfo::GetGUID` funzione.|

### <a name="format-message-extractor"></a>Formato estrattore messaggi

|||
|-|-|
|[ErrorMessage](../cpp/com-error-errormessage.md)|Recupera il messaggio stringa per HRESULT archiviato nell'oggetto **_com_error** .|

### <a name="exepinfowcode-to-hresult-mappers"></a>ExepInfo. wCode a Mapper HRESULT

|||
|-|-|
|[HRESULTToWCode](../cpp/com-error-hresulttowcode.md)|Esegue il mapping di HRESULT a 32 bit a `wCode`a 16 bit.|
|[WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)|Esegue il mapping di `wCode` a 16 bit a HRESULT a 32 bit.|

**Fine sezione specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:** \<Comdef. h >

`Lib:` comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (wchar_t è di tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per ulteriori informazioni.

## <a name="see-also"></a>Vedere anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)<br/>
[IErrorInfo (interfaccia)](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo)
