---
title: Abilitazione di risorse internazionali
ms.date: 11/04/2016
helpviewer_keywords:
- globalization [C++], character sets
- strings [C++], international enabling
- localization [C++], character sets
- MBCS [C++], enabling
- Unicode [C++], enabling
ms.assetid: b077f4ca-5865-40ef-a46e-d9e4d686ef21
ms.openlocfilehash: b6c645bafef87ed0b2d43903f4752ef659d79f89
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375797"
---
# <a name="international-enabling"></a>Abilitazione di risorse internazionali

La maggior parte dei tradizionali codici C e C , fa supposizioni sulla manipolazione di caratteri e stringhe che non funzionano bene per le applicazioni internazionali. Mentre sia MFC e la libreria di runtime supportano Unicode o MBCS, c'è ancora il lavoro per voi da fare. Per guidarvi, questa sezione spiega il significato di "abilitazione internazionale" in Visual C

- Sia Unicode che MBCS sono abilitati per mezzo di tipi di dati portabili negli elenchi di parametri di funzione MFC e tipi restituiti. Questi tipi vengono definiti in modo condizionale nei modi appropriati, `_UNICODE` a `_MBCS` seconda che la compilazione definisca il simbolo o il simbolo (che significa DBCS). Varianti diverse delle librerie MFC vengono collegate automaticamente all'applicazione, a seconda di quale di questi due simboli definisce la compilazione.

- Il codice della libreria di classi utilizza funzioni di runtime portabili e altri mezzi per garantire il corretto comportamento Unicode o MBCS.

- È comunque necessario gestire determinati tipi di attività di internazionalizzazione nel codice:You still must handle certain kinds of internationalization tasks in your code:

  - Utilizzare le stesse funzioni di runtime portabili che rendono MFC portabile in entrambi gli ambienti.

  - Rendere le stringhe letterali e i `_T` caratteri portabili in entrambi gli ambienti, utilizzando la macro. Per ulteriori informazioni, consultate Mapping di [testo generico in tchar.h](../text/generic-text-mappings-in-tchar-h.md).

  - Prendere precauzioni durante l'analisi delle stringhe in MBCS. Queste precauzioni non sono necessarie in Unicode. Per ulteriori informazioni, vedere Suggerimenti per la [programmazione di MBCS](../text/mbcs-programming-tips.md).

  - Prestare attenzione se si combinano caratteri ANSI (8 bit) e Unicode (16 bit) nell'applicazione. È possibile utilizzare caratteri ANSI in alcune parti del programma e caratteri Unicode in altri, ma non è possibile combinarli nella stessa stringa.

  - Non codificare le stringhe nell'applicazione. Rendere invece le risorse STRINGTABLE aggiungendole al file RC dell'applicazione. L'applicazione può quindi essere localizzata senza richiedere modifiche al codice sorgente o ricompilazione. Per ulteriori informazioni sulle risorse STRINGTABLE, vedere [Editor di](../windows/string-editor.md)stringhe .

> [!NOTE]
> I set di caratteri europei e MBCS hanno alcuni caratteri, ad esempio lettere accentate, con codici di carattere maggiori di 0x80. Poiché la maggior parte del codice utilizza caratteri con segno, questi caratteri maggiori di 0x80 vengono estesi al segno quando vengono convertiti **in int**. Si tratta di un problema per l'indicizzazione della matrice perché i caratteri estesi di segno, essendo negativi, indici all'esterno della matrice. Anche le lingue che utilizzano il formato MBCS, ad esempio il giapponese, sono univoche. Poiché un carattere può essere costituito da 1 o 2 byte, è sempre necessario modificare entrambi i byte contemporaneamente.

## <a name="see-also"></a>Vedere anche

[Unicode e MBCS](../text/unicode-and-mbcs.md)<br/>
[Strategie di internazionalizzazione](../text/internationalization-strategies.md)
