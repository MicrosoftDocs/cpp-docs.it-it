---
description: 'Altre informazioni su: supporto per set di caratteri multibyte (MBCS)'
title: Supporto per set di caratteri multibyte (MBCS, Multibyte Character Set)
ms.date: 11/04/2016
helpviewer_keywords:
- MBCS [C++], about MBCS
- character sets [C++], multibyte
- multibyte characters [C++]
- MBCS [C++]
ms.assetid: b498733c-a1e1-45e3-8f26-d6da3cb5f2dd
ms.openlocfilehash: 8ab6af7aa77942b39785faf68ea6a530867abff8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335774"
---
# <a name="support-for-multibyte-character-sets-mbcss"></a>Supporto per set di caratteri multibyte (MBCS, Multibyte Character Set)

I set di caratteri multibyte (MBCS) rappresentano un approccio meno recente alla necessità di supportare i set di caratteri che, come quello giapponese o cinese, non possono essere rappresentati con un singolo byte. Se si sta effettuando un nuovo sviluppo, si consiglia di utilizzare il formato Unicode per tutte le stringhe di testo eccetto per le stringhe di sistema che, probabilmente, non sono visualizzate dagli utenti finali. Il formato MBCS è una tecnologia legacy e non è consigliabile per le nuove tecniche di sviluppo.

L'implementazione MBCS più comune è costituita da Double Byte Character Set (DBCS). Visual C++ in generale e MFC in particolare sono completamente abilitati per DBCS.

Per gli esempi, vedere i file del codice sorgente MFC.

Per le piattaforme usate nei mercati le cui lingue usano set di caratteri di grandi dimensioni, l'alternativa migliore a Unicode è MBCS. MFC supporta MBCS attraverso l'uso di tipi di dati per i mercati internazionali e le funzioni di runtime C. È consigliabile optare per la stessa scelta nel codice.

In MBCS i caratteri vengono codificati in 1 o 2 byte. Nei caratteri a 2 byte il primo byte, o byte di apertura, segnala che questo byte e quello successivo devono essere interpretati come un carattere. Il primo byte proviene da un intervallo di codici riservati per l'uso come byte di apertura. Gli intervalli di byte che possono essere usati come byte di apertura dipendono dalla tabella codici in uso. Ad esempio, la tabella codici giapponese 932 usa l'intervallo compreso tra 0x81 e 0x9F come byte di apertura, mentre la tabella codici coreana 949 usa un intervallo diverso.

Per la programmazione MBCS, tenere presenti tutte le considerazioni seguenti.

I caratteri MBCS nei caratteri MBCS dell'ambiente possono essere visualizzati in stringhe quali i nomi di file e directory.

### <a name="editing-operations"></a>Operazioni di modifica

Le operazioni di modifica nelle applicazioni MBCS devono intervenire sui caratteri e non sui byte. Il punto di inserimento non deve suddividere un carattere, il tasto **freccia destra** deve spostarsi a destra di un carattere e così via. **Delete** deve eliminare un carattere; Il comando **Annulla** deve essere reinserito.

### <a name="string-handling"></a>Gestione delle stringhe

In un'applicazione che usa MBCS la gestione delle stringhe pone problemi speciali. Poiché caratteri di entrambe le larghezze vengono combinati in un'unica stringa, è necessario ricordare di controllare i byte di apertura.

### <a name="run-time-library-support"></a>Supporto delle librerie di runtime

La libreria di runtime C e MFC supportano programmazione a un byte, MBCS e Unicode. Le stringhe a byte singolo vengono elaborate con la `str` famiglia di funzioni di runtime, le stringhe MBCS vengono elaborate con le `_mbs` funzioni corrispondenti e le stringhe Unicode vengono elaborate con le `wcs` funzioni corrispondenti. Le implementazioni delle funzioni membro delle classi MFC usano funzioni di runtime portabili mappate, nelle situazioni appropriate, alla normale famiglia `str` di funzioni, le funzioni MBCS o le funzioni Unicode, come descritto in "Portabilità di MBCS/Unicode".

### <a name="mbcsunicode-portability"></a>Portabilità di MBCS/Unicode

Utilizzando il file di intestazione Tchar. h, è possibile compilare applicazioni a byte singolo, MBCS e Unicode dalle stesse origini. TCHAR. h definisce le macro precedute dal prefisso *_tcs* , che vengono mappate alle `str` `_mbs` funzioni, o `wcs` , in base alle esigenze. Per compilare MBCS, definire il simbolo `_MBCS` . Per compilare Unicode, definire il simbolo `_UNICODE` . Per impostazione predefinita, `_UNICODE` è definito per le applicazioni MFC. Per ulteriori informazioni, vedere [mapping di testo generico in TCHAR. h](../text/generic-text-mappings-in-tchar-h.md).

> [!NOTE]
> Il comportamento non è definito se si definiscono sia `_UNICODE` che `_MBCS` .

I file di intestazione Mbctype.h e Mbstring.h definiscono funzioni e macro specifiche di MBCS, che possono essere necessarie in alcuni casi. Ad esempio, `_ismbblead` indica se un byte specifico in una stringa è un byte di apertura.

Per la portabilità internazionale, codificare il programma con i set di caratteri [Unicode](../text/support-for-unicode.md) o multibyte (MBCS).

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Abilitare MBCS in un programma](../text/international-enabling.md)

- [Abilita sia Unicode che MBCS nel programma](../text/internationalization-strategies.md)

- [Usare MBCS per creare un programma per mercati internazionali](../text/mbcs-programming-tips.md)

- [Esaminare un riepilogo della programmazione MBCS](../text/mbcs-programming-tips.md)

- [Informazioni sulle mappature di testo generico per la portabilità della larghezza dei byte](../text/generic-text-mappings-in-tchar-h.md)

## <a name="see-also"></a>Vedi anche

[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)<br/>
[Supporto per MBCS in Visual C++](../text/mbcs-support-in-visual-cpp.md)
