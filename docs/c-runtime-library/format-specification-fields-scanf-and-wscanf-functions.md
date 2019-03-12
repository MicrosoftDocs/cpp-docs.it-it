---
title: 'Campi per la specifica di formato: funzioni scanf e wscanf'
ms.date: 11/04/2016
apilocation:
- msvcr80.dll
- msvcr110.dll
- msvcr90.dll
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr120.dll
apitype: DLLExport
f1_keywords:
- wscanf
- scanf
helpviewer_keywords:
- width, specifications in scanf function
- scanf format specifications
- scanf width specifications
- scanf type field characters
- type fields, scanf function
- format specification fields for scanf function
- type fields
ms.assetid: 7e95de1b-0b71-4de3-9f81-c9560c78e039
ms.openlocfilehash: 5b45de9af3642825f1fddf3a1560b2fc1dbc4ffc
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57748463"
---
# <a name="format-specification-fields-scanf-and-wscanf-functions"></a>Campi per la specifica di formato: funzioni scanf e wscanf

Le informazioni riportate si applicano all'intera famiglia di funzioni `scanf`, incluse le versioni sicure e descrivono i simboli utilizzati per comunicare alle funzioni `scanf` come analizzare il flusso di input, come il flusso di input `stdin` per `scanf`, in valori che vengono inseriti nelle variabili del programma.

Una specifica di formato presenta la forma seguente:

`%`[`*`] [[width](../c-runtime-library/scanf-width-specification.md)] [{[h &#124; l &#124; ll &#124; I64 &#124; L](../c-runtime-library/scanf-width-specification.md)}][type](../c-runtime-library/scanf-type-field-characters.md)

L'argomento `format` specifica l'interpretazione dell'input e può contenere uno o più dei seguenti:

- Spazi vuoti: vuoto (' '); tabulazione ('\t'); nuova riga ('\n'). Un carattere di spazio vuoto comporta che `scanf` legga, ma non memorizzi, tutti i caratteri di spazio vuoti consecutivi nell'input fino al successivo carattere diverso da uno spazio vuoto. Un carattere di spazio vuoto nel formato corrisponde a qualsiasi numero (0 incluso) e combinazione di caratteri di spazio vuoto nell'input.

- Caratteri diversi da uno spazio vuoto, ad eccezione del segno di percentuale (`%`). Un carattere diverso da uno spazio vuoto comporta che `scanf` legga, ma non memorizzi, un carattere diverso da uno spazio vuoto corrispondente. Se il carattere successivo nel flusso di input non corrisponde, `scanf` termina.

- Specifiche di formato, introdotte dal segno di percentuale (`%`). Una specifica di formato fa sì che `scanf` legga e converta i caratteri nell'input in valori di un tipo specificato. Il valore viene assegnato a un argomento nell'elenco degli argomenti.

Il formato viene letto da sinistra a destra. Ci si aspetta che i caratteri al di fuori delle specifiche di formato corrispondano alla sequenza di caratteri nel flusso di input; i caratteri corrispondenti nel flusso di input vengono analizzati ma non memorizzati. Se un carattere nel flusso di input è in conflitto con la specifica del formato, `scanf` termina e il carattere viene lasciato nel flusso di input come se non fosse stato letto.

Quando viene trovata la prima specifica di formato, il valore del primo campo di input viene convertito in base alla specifica e viene memorizzato nella posizione specificata dal primo `argument`. La seconda specifica di formato fa sì che il secondo campo di input venga convertito e memorizzato nel secondo `argument` e così via fino alla fine della stringa di formato.

Un campo di input viene definito come tutti i caratteri fino al primo carattere di spazio vuoto (spazio, tabulazione o nuova riga) o fino al primo carattere che non può essere convertito in base alla specifica di formato, oppure fino a quando non venga raggiunta la larghezza del campo (se specificata). Se sono presenti troppi argomenti per le specifiche date, gli argomenti aggiuntivi vengono valutati ma ignorati. I risultati non sono prevedibili se non vi sono argomenti sufficienti per la specifica di formato.

Ogni campo della specifica di formato è un carattere singolo o un numero che indica un'opzione di formattazione particolare. Il carattere `type`, visualizzato dopo l'ultimo campo facoltativo di formato, determina se il campo di input viene interpretato come un carattere, una stringa o un numero.

La specifica di formato più semplice contiene solo il segno di percentuale e un carattere `type` (ad esempio, `%s`). Se un segno di percentuale (`%`) è seguito da un carattere che non ha significato di carattere di controllo del formato, tale carattere e i caratteri seguenti (fino al segno di percentuale successivo) vengono considerati come una sequenza di caratteri ordinaria, ovvero, una sequenza di caratteri che deve corrispondere all'input. Ad esempio, per specificare che un carattere segno di percentuale deve essere di input, utilizzare `%%`.

Un asterisco (`*`) che segue il segno di percentuale elimina l'assegnazione del campo di input successivo, il quale viene interpretato come un campo del tipo specificato. Il campo viene analizzato ma non memorizzato.

Le versioni sicure (quelle con il suffisso `_s`) della famiglia di funzioni `scanf` richiedono che venga passato un parametro di dimensione del buffer immediatamente dopo ciascun parametro di tipo `c`, `C`, `s`, `S` o `[`. Per altre informazioni sulle versioni sicure della famiglia di funzioni `scanf`, vedere [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md).

## <a name="see-also"></a>Vedere anche

[Specifica della larghezza per scanf](../c-runtime-library/scanf-width-specification.md)<br/>
[Caratteri di campo di tipo per scanf](../c-runtime-library/scanf-type-field-characters.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)
