---
title: localeconv
ms.date: 4/2/2020
api_name:
- localeconv
- _o_localeconv
api_location:
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- localeconv
helpviewer_keywords:
- lconv type
- localeconv function
- locales, getting information on
ms.assetid: 7ecdb1f2-88f5-4037-a0e7-c754ab003660
ms.openlocfilehash: c154af87f135f5bf119de26ea8cd0be545ed5382
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82916401"
---
# <a name="localeconv"></a>localeconv

Ottiene informazioni dettagliate sulle impostazioni locali.

## <a name="syntax"></a>Sintassi

```C
struct lconv *localeconv( void );
```

## <a name="return-value"></a>Valore restituito

**localeconv** restituisce un puntatore a un oggetto compilato di tipo [struct lconv](../../c-runtime-library/standard-types.md). I valori contenuti nell'oggetto vengono copiati dalle impostazioni locali nella risorsa di archiviazione locale di thread e possono essere sovrascritti dalle chiamate successive a **localeconv**. Le modifiche apportate ai valori in questo oggetto non modificano le impostazioni locali. Le chiamate a [setlocale](setlocale-wsetlocale.md) con i valori di *categoria* di **LC_ALL**, **LC_MONETARY**o **LC_NUMERIC** sovrascrivono il contenuto della struttura.

## <a name="remarks"></a>Osservazioni

La funzione **localeconv** ottiene informazioni dettagliate sulla formattazione numerica per le impostazioni locali correnti. Queste informazioni vengono archiviate in una struttura di tipo **lconv**. La struttura **lconv**, definita in LOCALE.H, contiene i campi seguenti:

|Campo|Significato|
|-|-|
decimal_point,<br/>_W_decimal_point|Puntatore al carattere del punto decimale per le quantità non monetarie.
thousands_sep,<br/>_W_thousands_sep|Puntatore a carattere che separa i gruppi di cifre a sinistra del separatore decimale per le quantità non monetarie.
raggruppamento|Puntatore a un intero di dimensione **char**che contiene la dimensione di ogni gruppo di cifre nelle quantità non monetarie.
int_curr_symbol,<br/>_W_int_curr_symbol|Puntatore al simbolo di valuta internazionale per le impostazioni locali correnti. I primi tre caratteri specificano il simbolo di valuta internazionale alfabetico come definito nello standard *ISO 4217 dei codici per la rappresentazione di valute e fondi*. Il quarto carattere (carattere Null immediatamente precedente) separa il simbolo di valuta internazionale dalla quantità monetaria.
currency_symbol,<br/>_W_currency_symbol|Puntatore al simbolo di valuta locale per le impostazioni locali correnti.
mon_decimal_point,<br/>_W_mon_decimal_point|Puntatore al carattere del punto decimale per le quantità monetarie.
mon_thousands_sep,<br/>_W_mon_thousands_sep|Puntatore al separatore per i gruppi di cifre a sinistra della posizione decimale in quantità monetarie.
mon_grouping|Puntatore a un intero di dimensione **char**che contiene la dimensione di ogni gruppo di cifre nelle quantità monetarie.
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

Ad eccezione di quanto specificato, i **lconv** membri della struttura lconv `char *` con `wchar_t *` le versioni e sono puntatori alle stringhe. Uno di questi equivale a **""** (o **L ""** per **wchar_t** <strong>\*</strong>) è di lunghezza zero o non è supportato nelle impostazioni locali correnti. Si noti che **decimal_point** e **_W_decimal_point** sono sempre supportati e di lunghezza diversa da zero.

I membri **char** della struttura sono numeri non negativi piccoli, non caratteri. Qualsiasi membro tra questi uguale a **CHAR_MAX** non è supportato nelle impostazioni locali correnti.

I valori di **grouping** e **mon_grouping** vengono interpretati in base alle regole seguenti:

- **CHAR_MAX** : non eseguire ulteriori operazioni di raggruppamento.

- 0: utilizzare l'elemento precedente per ognuna delle cifre rimanenti.

- *n* : numero di cifre che costituiscono il gruppo corrente. Viene esaminato l'elemento successivo per determinare le dimensioni del gruppo successivo di cifre prima del gruppo corrente.

I valori per **int_curr_symbol** vengono interpretati in base alle regole seguenti:

- I primi tre caratteri specificano il simbolo di valuta internazionale alfabetico come definito nello standard *ISO 4217 dei codici per la rappresentazione di valute e fondi*.

- Il quarto carattere (carattere Null immediatamente precedente) separa il simbolo di valuta internazionale dalla quantità monetaria.

I valori per **p_cs_precedes** e **n_cs_precedes** vengono interpretati in base alle regole seguenti (la regola **n_cs_precedes** è tra parentesi):

- 0: il simbolo di valuta segue il valore per un valore monetario formattato non negativo (negativo).

- 1-il simbolo di valuta precede il valore per un valore monetario non negativo (negativo).

I valori per **p_sep_by_space** e **n_sep_by_space** vengono interpretati in base alle regole seguenti (la regola **n_sep_by_space** è tra parentesi):

- 0: il simbolo di valuta è separato dal valore per spazio per un valore monetario formattato non negativo (negativo).

- 1-non esiste alcuna separazione dello spazio tra il simbolo di valuta e il valore per un valore monetario non negativo (negativo).

I valori per **p_sign_posn** e **n_sign_posn** vengono interpretati in base alle regole seguenti:

- 0-le parentesi circondano la quantità e il simbolo di valuta.

- 1-la stringa del segno precede la quantità e il simbolo di valuta.

- 2-la stringa di segno segue la quantità e il simbolo di valuta.

- 3-la stringa del segno precede immediatamente il simbolo di valuta.

- 4-la stringa di segno segue immediatamente il simbolo di valuta.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**localeconv**|\<locale.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Locale](../../c-runtime-library/locale.md)<br/>
[setlocale](../../preprocessor/setlocale.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
