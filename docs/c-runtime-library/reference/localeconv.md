---
title: localeconv
ms.date: 11/04/2016
apiname:
- localeconv
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-locale-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- localeconv
helpviewer_keywords:
- lconv type
- localeconv function
- locales, getting information on
ms.assetid: 7ecdb1f2-88f5-4037-a0e7-c754ab003660
ms.openlocfilehash: bf26e4f7b7fb4f0334b57604fe5c4996312bd62a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62286306"
---
# <a name="localeconv"></a>localeconv

Ottiene informazioni dettagliate sulle impostazioni locali.

## <a name="syntax"></a>Sintassi

```C
struct lconv *localeconv( void );
```

## <a name="return-value"></a>Valore restituito

**localeconv** restituisce un puntatore a un oggetto compilato di tipo [struct lconv](../../c-runtime-library/standard-types.md). I valori contenuti nell'oggetto vengono copiati dalle impostazioni locali nell'archiviazione thread-local e possono essere sovrascritti da chiamate successive a **localeconv**. Le modifiche apportate ai valori in questo oggetto non modificano le impostazioni locali. Le chiamate a [setlocale](setlocale-wsetlocale.md) con *categoria* valori di **LC_ALL**, **LC_MONETARY**, o **LC_NUMERIC** sovrascrivere il contenuto della struttura.

## <a name="remarks"></a>Note

Il **localeconv** funzione consente di ottenere informazioni dettagliate sulla formattazione numerica per impostazioni locali correnti. Queste informazioni vengono archiviate in una struttura di tipo **lconv**. La struttura **lconv**, definita in LOCALE.H, contiene i campi seguenti:

|Campo|Significato|
|-|-|
decimal_point,<br/>_W_decimal_point|Puntatore al carattere per le quantità non monetarie del separatore decimale.
thousands_sep,<br/>_W_thousands_sep|Puntatore al carattere che separa gruppi di cifre a sinistra del separatore decimale per le quantità non monetarie.
raggruppamento|Puntatore a un **char**-dimensioni integer che contiene la dimensione di ogni gruppo di cifre nelle quantità non monetarie.
int_curr_symbol,<br/>_W_int_curr_symbol|Puntatore al simbolo di valuta internazionale per impostazioni locali correnti. I primi tre caratteri specificano il simbolo di valuta internazionale alfabetico come definito nello standard *ISO 4217 dei codici per la rappresentazione di valute e fondi*. Il quarto carattere (carattere Null immediatamente precedente) separa il simbolo di valuta internazionale dalla quantità monetaria.
currency_symbol,<br/>_W_currency_symbol|Puntatore al simbolo di valuta locale per impostazioni locali correnti.
mon_decimal_point,<br/>_W_mon_decimal_point|Puntatore al carattere per le quantità monetarie del separatore decimale.
mon_thousands_sep,<br/>_W_mon_thousands_sep|Puntatore al separatore di gruppi di cifre a sinistra del separatore decimale nelle quantità monetarie.
mon_grouping|Puntatore a un **char**-dimensioni integer che contiene la dimensione di ogni gruppo di cifre nelle quantità monetarie.
positive_sign,<br/>_W_positive_sign|Stringa del segno per le quantità monetarie non negative.
negative_sign,<br/>_W_negative_sign|Stringa del segno per le quantità monetarie negative.
int_frac_digits|Numero di cifre a destra del separatore decimale in quantità monetarie con formattazione internazionale.
frac_digits|Numero di cifre a destra del separatore decimale in quantità monetarie formattate.
p_cs_precedes|Impostare su 1 se il simbolo di valuta precede il valore per la quantità monetaria formattata non negativa. Impostare su 0 se il simbolo segue il valore.
p_sep_by_space|Impostare su 1 se il simbolo di valuta è separato con uno spazio dal valore per la quantità monetaria formattata non negativa. Impostare su 0 in assenza di uno spazio di separazione.
n_cs_precedes|Impostare su 1 se il simbolo di valuta precede il valore per la quantità monetaria formattata negativa. Impostare su 0 se il simbolo segue il valore.
n_sep_by_space|Impostare su 1 se il simbolo di valuta è separato con uno spazio dal valore per la quantità monetaria formattata negativa. Impostare su 0 in assenza di uno spazio di separazione.
p_sign_posn|Posizione del segno positivo in quantità monetarie formattata non negative.
n_sign_posn|Posizione del segno positivo in quantità monetarie formattata negative.

Fatta eccezione per quanto specificati, membri del **lconv** struttura contenenti `char *` e `wchar_t *` versioni sono puntatori alle stringhe. Uno di questi uguale a **""** (o **L ""** per **wchar_t** <strong>\*</strong>) è di lunghezza zero oppure non è supportata nell'attuale impostazioni locali. Si noti che **decimal_point** e **_W_decimal_point** sono sempre supportati e di lunghezza diversa da zero.

Il **char** membri della struttura sono numeri non negativi piccoli, non caratteri. Qualsiasi membro tra questi uguale a **CHAR_MAX** non è supportato nelle impostazioni locali correnti.

I valori della **raggruppamento** e **mon_grouping** vengono interpretati in base alle regole seguenti:

- **CHAR_MAX** -non eseguire alcun ulteriore raggruppamento.

- 0 - usare l'elemento precedente per ognuna delle cifre rimanenti.

- *n* -numero di cifre che compongono il gruppo corrente. Viene esaminato l'elemento successivo per determinare le dimensioni del gruppo successivo di cifre prima del gruppo corrente.

I valori per **int_curr_symbol** vengono interpretati in base alle regole seguenti:

- I primi tre caratteri specificano il simbolo di valuta internazionale alfabetico come definito nello standard *ISO 4217 dei codici per la rappresentazione di valute e fondi*.

- Il quarto carattere (carattere Null immediatamente precedente) separa il simbolo di valuta internazionale dalla quantità monetaria.

I valori per **p_cs_precedes** e **n_cs_precedes** vengono interpretati in base alle regole seguenti (la regola **n_cs_precedes** è tra parentesi):

- 0 - simbolo di valuta segue il valore per la non negativa (negativa) formattata.

- 1 - simbolo di valuta precede il valore per la non negativa (negativa) formattata.

I valori per **p_sep_by_space** e **n_sep_by_space** vengono interpretati in base alle regole seguenti (la regola **n_sep_by_space** è tra parentesi):

- 0 - simbolo di valuta è separato dal valore con uno spazio per la non negativa (negativa) formattata.

- 1 - non è alcuna separazione di spazio tra il simbolo di valuta e il valore per la non negativa (negativa) formattata.

I valori per **p_sign_posn** e **n_sign_posn** vengono interpretati in base alle regole seguenti:

- 0 - quantità e simbolo di valuta racchiusi tra parentesi.

- 1 - sign stringa precede quantità e simbolo di valuta.

- 2 - stringa del segno dopo quantità e simbolo di valuta.

- 3 - accesso stringa precede immediatamente simbolo di valuta.

- 4 - accesso stringa immediatamente il simbolo di valuta segue.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**localeconv**|\<locale.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[setlocale](../../preprocessor/setlocale.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
