---
description: 'Altre informazioni su: stringhe di linguaggio'
title: Language Strings
ms.date: 11/04/2016
helpviewer_keywords:
- language strings
ms.assetid: bbee63b1-af0b-4e44-9eaf-dd3e265c05fd
ms.openlocfilehash: 077a440981c9e39e87356310c40ae9b249d4662e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97246578"
---
# <a name="language-strings"></a>Language Strings

Le funzioni [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) e [_create_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md) possono usare le lingue supportate dall'API NLS di Windows nei sistemi operativi che non usano la tabella codici Unicode. Per un elenco delle lingue supportate in base alla versione del sistema operativo, vedere [appendice a: comportamento del prodotto](/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c) in \[ MS-LCID]: informazioni di riferimento sull'identificatore del codice lingua (LCID) di Windows. La stringa di lingua può essere uno dei valori nelle colonne **Language** (Lingua) e **Language tag** (Tag lingua) dell'elenco delle lingue supportate. Per un esempio di codice che enumera i nomi delle impostazioni locali disponibili e i valori correlati, vedere [NLS: Name-based APIs Sample](/windows/win32/intl/nls--name-based-apis-sample) (NLS: esempio di API basate sui nomi).

## <a name="additional-supported-language-strings"></a>Stringhe di lingua aggiuntive supportate

L'implementazione della libreria di runtime Microsoft C supporta anche queste stringhe di lingua:

|Stringa lingua|Nome equivalente delle impostazioni locali|
|---------------------|----------------------------|
|american|en-US|
|inglese americano|en-US|
|inglese americano|en-US|
|australian|en-AU|
|belgian|nl-BE|
|canadian|en-CA|
|chh|zh-HK|
|chi|zh-SG|
|chinese|zh|
|cinese hongkong|zh-HK|
|cinese semplificato|zh-CN|
|cinese singapore|zh-SG|
|cinese tradizionale|zh-TW|
|olandese belga|nl-BE|
|inglese americano|en-US|
|inglese aus|en-AU|
|inglese belize|en-BZ|
|inglese can|en-CA|
|inglese caraibi|en-029|
|inglese irl|en-IE|
|inglese giamaica|en-JM|
|inglese nz|en-NZ|
|inglese sudafrica|en-ZA|
|inglese trinidad y tobago|en-TT|
|inglese regno unito|en-GB|
|inglese stati uniti|en-US|
|inglese stati uniti|en-US|
|francese belga|fr-BE|
|francese canadese|fr-CA|
|francese lussemburgo|fr-LU|
|francese svizzero|fr-CH|
|tedesco austriaco|de-AT|
|tedesco liechtenstein|de-LI|
|tedesco lussemburgo|de-LU|
|tedesco svizzero|de-CH|
|irlandese inglese|en-IE|
|italiano svizzero|it-CH|
|norwegian|No|
|norvegese bokmål|nb-NO|
|norvegese nynorsk|nn-NO|
|portoghese brasile|pt-BR|
|spagnolo argentina|es-AR|
|spagnolo bolivia|es-BO|
|spagnolo cile|es-CL|
|spagnolo colombia|es-CO|
|spagnolo costa rica|es-CR|
|spagnolo repubblica dominicana|es-DO|
|spagnolo ecuador|es-EC|
|spagnolo el salvador|es-SV|
|spagnolo guatemala|es-GT|
|spagnolo honduras|es-HN|
|spagnolo (Messico)|es-MX|
|spagnolo moderno|es-ES|
|spagnolo nicaragua|es-NI|
|spagnolo panama|es-PA|
|spagnolo paraguay|es-PY|
|spagnolo perù|es-PE|
|spagnolo porto rico|es-PR|
|spagnolo uruguay|es-UY|
|spagnolo venezuela|es-VE|
|svedese finlandia|sv-FI|
|swiss|de-CH|
|uk|en-GB|
|us|en-US|
|usa|en-US|

## <a name="see-also"></a>Vedi anche

[Nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../c-runtime-library/locale-names-languages-and-country-region-strings.md)<br/>
[Stringhe di paese/area geografica](../c-runtime-library/country-region-strings.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)
