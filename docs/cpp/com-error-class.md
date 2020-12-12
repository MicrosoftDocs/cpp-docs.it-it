---
description: 'Altre informazioni su: _com_error Class'
title: Classe _com_error
ms.date: 11/04/2016
f1_keywords:
- _com_error
helpviewer_keywords:
- _com_error class
ms.assetid: 70dafa69-b1fb-4a5c-9249-e857e0793d42
ms.openlocfilehash: 2d297da005feba39838679ed2b7062ce54ad9c38
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318208"
---
# <a name="_com_error-class"></a>Classe _com_error

**Specifico di Microsoft**

Un oggetto **_com_error** rappresenta una condizione di eccezione rilevata dalle funzioni wrapper di gestione degli errori nei file di intestazione generati dalla libreria dei tipi o da una delle classi di supporto com. La classe **_com_error** incapsula il codice di errore HRESULT e qualsiasi `IErrorInfo Interface` oggetto associato.

### <a name="construction"></a>Edilizia

| Nome | Description |
|-|-|
|[_com_error](../cpp/com-error-com-error.md)|Costruisce un oggetto **_com_error** .|

### <a name="operators"></a>Operatori

| Nome | Description |
|-|-|
|[operatore =](../cpp/com-error-operator-equal.md)|Assegna un oggetto **_com_error** esistente a un altro oggetto.|

### <a name="extractor-functions"></a>Funzioni Extractor

| Nome | Descrizione |
|-|-|
|[Error (Errore) (Error (Errore)e)](../cpp/com-error-error.md)|Recupera il valore HRESULT passato al costruttore.|
|[ErrorInfo](../cpp/com-error-errorinfo.md)|Recupera l' `IErrorInfo` oggetto passato al costruttore.|
|[WCode](../cpp/com-error-wcode.md)|Recupera il codice di errore a 16 bit mappato nell'HRESULT incapsulato.|

### <a name="ierrorinfo-functions"></a>Funzioni IErrorInfo

| Nome | Descrizione |
|-|-|
|[Descrizione](../cpp/com-error-description.md)|Chiama la `IErrorInfo::GetDescription` funzione.|
|[HelpContext](../cpp/com-error-helpcontext.md)|Chiama la `IErrorInfo::GetHelpContext` funzione.|
|[HelpFile](../cpp/com-error-helpfile.md)|Funzione calls `IErrorInfo::GetHelpFile`|
|[Origine](../cpp/com-error-source.md)|Chiama la `IErrorInfo::GetSource` funzione.|
|[GUID](../cpp/com-error-guid.md)|Chiama la `IErrorInfo::GetGUID` funzione.|

### <a name="format-message-extractor"></a>Formato estrattore messaggi

| Nome | Description |
|-|-|
|[ErrorMessage](../cpp/com-error-errormessage.md)|Recupera il messaggio stringa per HRESULT archiviato nell'oggetto **_com_error** .|

### <a name="exepinfowcode-to-hresult-mappers"></a>ExepInfo. wCode a Mapper HRESULT

| Nome | Description |
|-|-|
|[HRESULTToWCode](../cpp/com-error-hresulttowcode.md)|Esegue il mapping di HRESULT a 32 bit a 16 bit `wCode` .|
|[WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)|Esegue il mapping `wCode` di un HRESULT a 16 bit a 32 bit.|

**TERMINA specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:**\<comdef.h>

`Lib:` comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (wchar_t è di tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per ulteriori informazioni.

## <a name="see-also"></a>Vedi anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)<br/>
[IErrorInfo (interfaccia)](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo)
