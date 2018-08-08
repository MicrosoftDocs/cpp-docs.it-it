---
title: Stringhe lingua | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.strings
dev_langs:
- C++
helpviewer_keywords:
- language strings
ms.assetid: bbee63b1-af0b-4e44-9eaf-dd3e265c05fd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eaab56876651a1056ef89d57bebb2799d1bb3194
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39604141"
---
# <a name="language-strings"></a>Language Strings

Le funzioni [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) e [_create_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md) possono usare le lingue supportate dall'API NLS di Windows nei sistemi operativi che non usano la tabella codici Unicode. Per un elenco delle lingue supportate in base alla versione del sistema operativo, vedere [Appendix A: Product Behavior](https://msdn.microsoft.com/library/cc233982.aspx) (Appendice A: comportamento del prodotto) in "[MS-LCID]: Windows Language Code Identifier (LCID) Reference" (Informazioni di riferimento sugli identificatori di lingua (LCID) di Windows). La stringa di lingua può essere uno dei valori nelle colonne **Language** (Lingua) e **Language tag** (Tag lingua) dell'elenco delle lingue supportate. Per un esempio di codice che enumera i nomi delle impostazioni locali disponibili e i valori correlati, vedere [NLS: Name-based APIs Sample](/windows/desktop/intl/nls--name-based-apis-sample) (NLS: esempio di API basate sui nomi).

## <a name="additional-supported-language-strings"></a>Stringhe di lingua aggiuntive supportate

L'implementazione della libreria di runtime Microsoft C supporta anche queste stringhe di lingua:

|Stringa lingua|Nome equivalente delle impostazioni locali|
|---------------------|----------------------------|
|americano|it-IT|
|inglese americano|it-IT|
|inglese americano|it-IT|
|australiano|en-AU|
|belga|nl-BE|
|canadese|en-CA|
|chh|zh-HK|
|chi|zh-SG|
|cinese|zh|
|cinese hongkong|zh-HK|
|cinese semplificato|zh-CN|
|cinese singapore|zh-SG|
|cinese tradizionale|zh-TW|
|olandese belga|nl-BE|
|inglese americano|it-IT|
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
|inglese stati uniti|it-IT|
|inglese stati uniti|it-IT|
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
|norvegese|No|
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
|spagnolo messicano|es-MX|
|spagnolo moderno|es-ES|
|spagnolo nicaragua|es-NI|
|spagnolo panama|es-PA|
|spagnolo paraguay|es-PY|
|spagnolo perù|es-PE|
|spagnolo porto rico|es-PR|
|spagnolo uruguay|es-UY|
|spagnolo venezuela|es-VE|
|svedese finlandia|sv-FI|
|svizzero|de-CH|
|uk|en-GB|
|us|it-IT|
|stati uniti|it-IT|

## <a name="see-also"></a>Vedere anche

[Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)  
[Stringhe relative a paesi/aree geografiche](../c-runtime-library/country-region-strings.md)  
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)  
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)  
