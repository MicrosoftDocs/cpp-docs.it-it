---
title: Nomi delle impostazioni locali, lingue e stringhe relative a paesi
ms.date: 12/10/2018
helpviewer_keywords:
- country/region strings
- localization, locale
- locales
- setlocale function
- language strings
ms.assetid: a0e5a0c5-5602-4da0-b65f-de3d6c8530a2
ms.openlocfilehash: 5a430154c9ad31a9776eeb2ba569fa0da33fac81
ms.sourcegitcommit: 31a443c9998cf5cfbaff00fcf815b133f55b2426
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/14/2020
ms.locfileid: "86373550"
---
# <a name="ucrt-locale-names-languages-and-countryregion-strings"></a>UCRT Nomi delle impostazioni locali, lingue e stringhe di paese/area geografica

L'argomento *locale* delle funzioni [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md), [\_create\_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md) e [\_wcreate\_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md) può essere impostato usando i nomi delle impostazioni locali, le lingue, i codici di paese/area geografica e le tabelle codici supportati dall'API NLS di Windows. L'argomento *locale* assume il formato seguente:

> *impostazioni locali* :: "*nome-impostazioni locali*"<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\|"*lingua* \[ **\_** _paese-regione_ \[ __.__ *tabella codici*]] "<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\|"__.__ *tabella codici*"<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\| "C"<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\| ""<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\| NULL

Il formato *locale-name* è una stringa standard IEFT breve, ad esempio `en-US` per la lingua inglese (Stati Uniti) o `bs-Cyrl-BA` per la lingua bosniaca (Cirillico, Bosnia ed Erzegovina). Questi formati sono i preferiti. Per un elenco dei nomi delle impostazioni locali supportati dalla versione del sistema operativo Windows, vedere la colonna **tag lingua** della tabella in [appendice a: comportamento del prodotto](https://docs.microsoft.com/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c) in \[ MS-LCID]: informazioni di riferimento sull'identificatore del codice lingua (LCID) di Windows. Sono elencate le parti lingua, script e paese supportate dei nomi delle impostazioni locali. Per informazioni sui nomi delle impostazioni locali supportati che presentano ordinamenti non predefiniti, vedere la colonna dei **nomi delle impostazioni locali** nell'articolo relativo agli [identificatori di ordinamento](/windows/win32/Intl/sort-order-identifiers). In Windows 10 o versioni successive, sono consentiti i nomi delle impostazioni locali che corrispondono ai tag di lingua [BCP-47](https://tools.ietf.org/html/bcp47) validi. Ad esempio, `jp-US` è un tag BCP-47 valido, ma in effetti è solo `US` per le funzionalità delle impostazioni locali.

*Lingua* \[ **\_** _-regione_ \[ __.__ *tabella codici*]] il form viene archiviato nell'impostazione delle impostazioni locali per una categoria quando si usa una stringa di lingua, o una stringa lingua e una stringa paese o area geografica, per creare le impostazioni locali. Il set delle stringhe di lingua supportate è descritto in [Language Strings](../c-runtime-library/language-strings.md) (Stringhe di lingue), mentre l'elenco delle stringhe di paese/area geografica supportate è riportato in [Country/Region Strings](../c-runtime-library/country-region-strings.md) (Stringhe di paese/area geografica). Se la lingua specificata non è associata all'area geografica o al paese specificato, nelle impostazioni locali viene archiviata la lingua predefinita dell'area geografica o del paese specificato. Questo formato non è consigliabile per le stringhe delle impostazioni locali incorporate nel codice o serializzate nell'archiviazione perché tali stringhe hanno molte più probabilità di subire modifiche in seguito a un aggiornamento del sistema operativo rispetto al formato del nome delle impostazioni locali.

La *tabella codici* è la tabella codici ANSI/OEM associata alle impostazioni locali. La tabella codici viene determinata automaticamente quando le impostazioni locali vengono specificate in base alla lingua o alla lingua e al paese. Il valore speciale `.ACP` specifica la tabella codici ANSI per il paese/area. Il valore speciale `.OCP` specifica la tabella codici OEM per il paese/area. Se ad esempio si specifica `"Greek_Greece.ACP"` come valore delle impostazioni locali, queste ultime vengono archiviate come `Greek_Greece.1253` , vale a dire la tabella codici ANSI per la lingua greca. Se invece si specifica `"Greek_Greece.OCP"` , le impostazioni locali vengono archiviate come `Greek_Greece.737` , vale a dire la tabella codici OEM per la lingua greca. Per altre informazioni sulle tabelle codici, vedere [Tabelle codici](../c-runtime-library/code-pages.md). Per un elenco delle tabelle codici supportate in Windows, vedere l'articolo relativo agli [identificatori delle tabelle codici](/windows/win32/Intl/code-page-identifiers).

Se si usa esclusivamente la tabella codici per specificare le impostazioni locali, vengono usati paese/area e lingua predefiniti dell'utente indicati da [GetUserDefaultLocaleName](/windows/win32/api/winnls/nf-winnls-getuserdefaultlocalename). Se ad esempio si specifica `".1254"` (ANSI - Turco) come valore delle impostazioni locali per un utente configurato per la lingua inglese (Stati Uniti), le impostazioni locali archiviate sono `English_United States.1254`. Questo formato non è consigliabile perché potrebbe generare un comportamento non coerente.

Il valore `C` per l'argomento *locale* specifica l'ambiente ANSI minimo per la conversione C. Le impostazioni locali `C` presuppongono che ogni tipo di dati **char** sia 1 byte e il relativo valore sia sempre minore di 256. Se *locale* punta a una stringa vuota, le impostazioni locali corrispondono all'ambiente nativo definito in fase di implementazione.

È possibile specificare contemporaneamente tutte le categorie di impostazioni locali per le funzioni `setlocale` e `_wsetlocale` utilizzando la categoria `LC_ALL` . È possibile impostare le categorie sulle stesse impostazioni locali oppure impostare singolarmente ogni categoria utilizzando un argomento delle impostazioni locali con il formato seguente:

> *LC-ALL-specifier* :: *locale*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\| \[**LC_COLLATE=**_locale_]\[**;LC_CTYPE=**_locale_]\[**;LC_MONETARY=**_locale_]\[**;LC_NUMERIC=**_locale_]\[**;LC_TIME=**_locale_]

È possibile specificare più tipi di categoria, separati da punti e virgola. I tipi di categoria non specificati utilizzano le impostazioni locali correnti. Questo frammento di codice, ad esempio, imposta su `de-DE` le impostazioni locali correnti di tutte le categorie, quindi imposta le categorie `LC_MONETARY` su `en-GB` e le categorie `LC_TIME` su `es-ES`:

```C
_wsetlocale(LC_ALL, L"de-DE");
_wsetlocale(LC_ALL, L"LC_MONETARY=en-GB;LC_TIME=es-ES");
```

## <a name="see-also"></a>Vedere anche

[Riferimenti alla libreria di runtime C](../c-runtime-library/c-run-time-library-reference.md)<br/>
[_get_current_locale](../c-runtime-library/reference/get-current-locale.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)<br/>
[Stringhe relative a lingue](../c-runtime-library/language-strings.md)<br/>
[Stringhe di paese/area geografica](../c-runtime-library/country-region-strings.md)
