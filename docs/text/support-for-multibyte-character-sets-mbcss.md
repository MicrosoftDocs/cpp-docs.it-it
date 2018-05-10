---
title: Supporto per il set di caratteri Multibyte (MBCS) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- _mbcs
dev_langs:
- C++
helpviewer_keywords:
- MBCS [C++], about MBCS
- character sets [C++], multibyte
- multibyte characters [C++]
- MBCS [C++]
ms.assetid: b498733c-a1e1-45e3-8f26-d6da3cb5f2dd
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7b0381b570cbf9e900d44ac075876e63b6be14a8
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="support-for-multibyte-character-sets-mbcss"></a>Supporto per set di caratteri multibyte (MBCS, Multibyte Character Set)
I set di caratteri multibyte (MBCS) rappresentano un approccio meno recente alla necessità di supportare i set di caratteri che, come quello giapponese o cinese, non possono essere rappresentati con un singolo byte. Se si sta effettuando un nuovo sviluppo, si consiglia di utilizzare il formato Unicode per tutte le stringhe di testo eccetto per le stringhe di sistema che, probabilmente, non sono visualizzate dagli utenti finali. Il formato MBCS è una tecnologia legacy e non è consigliabile per le nuove tecniche di sviluppo.  
  
 L'implementazione MBCS più comune è costituita da Double Byte Character Set (DBCS). Visual C++ in generale e MFC in particolare sono completamente abilitati per DBCS.  
  
 Per gli esempi, vedere i file del codice sorgente MFC.  
  
 Per le piattaforme usate nei mercati le cui lingue usano set di caratteri di grandi dimensioni, l'alternativa migliore a Unicode è MBCS. MFC supporta MBCS attraverso l'uso di tipi di dati per i mercati internazionali e le funzioni di runtime C. È consigliabile optare per la stessa scelta nel codice.  
  
 In MBCS i caratteri vengono codificati in 1 o 2 byte. Nei caratteri a 2 byte il primo byte, o byte di apertura, segnala che questo byte e quello successivo devono essere interpretati come un carattere. Il primo byte proviene da un intervallo di codici riservati per l'uso come byte di apertura. Gli intervalli di byte che possono essere usati come byte di apertura dipendono dalla tabella codici in uso. Ad esempio, la tabella codici giapponese 932 usa l'intervallo compreso tra 0x81 e 0x9F come byte di apertura, mentre la tabella codici coreana 949 usa un intervallo diverso.  
  
 Per la programmazione MBCS, tenere presenti tutte le considerazioni seguenti.  
  
 Caratteri MBCS nell'ambiente  
 I caratteri MBCS possono essere visualizzati in stringhe, ad esempio in nomi di file e directory.  
  
 Operazioni di modifica  
 Le operazioni di modifica nelle applicazioni MBCS devono intervenire sui caratteri e non sui byte. Il cursore non deve dividere un carattere, il tasto freccia DESTRA deve spostare il cursore a destra di un carattere e così via. **Eliminare** dovrebbe eliminare un carattere, **Annullare** lo deve reinserire.  
  
 Gestione delle stringhe  
 In un'applicazione che usa MBCS la gestione delle stringhe pone problemi speciali. Poiché caratteri di entrambe le larghezze vengono combinati in un'unica stringa, è necessario ricordare di controllare i byte di apertura.  
  
 Supporto delle librerie di runtime  
 La libreria di runtime C e MFC supportano programmazione a un byte, MBCS e Unicode. Le stringhe a byte singolo vengono elaborate con la `str` famiglia di funzioni in fase di esecuzione, le stringhe MBCS vengono elaborate con corrispondente `_mbs` funzioni e le stringhe Unicode vengono elaborati con corrispondente *wcs* funzioni. Le implementazioni delle funzioni membro delle classi MFC usano funzioni di runtime portabili mappate, nelle situazioni appropriate, alla normale famiglia `str` di funzioni, le funzioni MBCS o le funzioni Unicode, come descritto in "Portabilità di MBCS/Unicode".  
  
 Portabilità di MBCS/Unicode  
 Usando il file di intestazione Tchar.h, è possibile compilare applicazioni a un byte, MBCS e Unicode dalle stesse origini. Tchar. h definisce le macro precedute *tcs* , che eseguono il mapping a `str`, `_mbs`, o *wcs* funzioni, come appropriato. Per compilare applicazioni MBCS, definire il simbolo **MBCS**. Per compilare Unicode, definire il simbolo **Unicode**. Per impostazione predefinita, **MBCS** è definito per le applicazioni MFC. Per ulteriori informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).  
  
> [!NOTE]
>  Comportamento sarà indefinito se si definiscono gli oggetti **Unicode** e **MBCS**.  
  
 I file di intestazione Mbctype.h e Mbstring.h definiscono funzioni e macro specifiche di MBCS, che possono essere necessarie in alcuni casi. Ad esempio, `_ismbblead` indica se un byte specifico in una stringa è un byte di apertura.  
  
 Per garantire la portabilità internazionale, il codice del programma con [Unicode](../text/support-for-unicode.md) o set di caratteri multibyte (MBCS).  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Abilitare MBCS in un programma](../text/international-enabling.md)  
  
-   [Abilitare Unicode e MBCS in un programma](../text/internationalization-strategies.md)  
  
-   [Usare MBCS per creare un programma per mercati internazionali](../text/mbcs-programming-tips.md)  
  
-   [Visualizzare un riepilogo della programmazione MBCS](../text/mbcs-programming-tips.md)  
  
-   [Informazioni sulle mappature di testo generico per la portabilità della larghezza di byte](../text/generic-text-mappings-in-tchar-h.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)   
 [Supporto per MBCS in Visual C++](../text/mbcs-support-in-visual-cpp.md)