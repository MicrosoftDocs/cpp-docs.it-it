---
title: "Supporto per set di caratteri multibyte (MBCS, Multibyte Character Set) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mbcs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set di caratteri [C++], multibyte"
  - "MBCS [C++]"
  - "MBCS [C++], informazioni su MBCS"
  - "caratteri multibyte [C++]"
ms.assetid: b498733c-a1e1-45e3-8f26-d6da3cb5f2dd
caps.latest.revision: 11
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 11
---
# Supporto per set di caratteri multibyte (MBCS, Multibyte Character Set)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I set di caratteri multibyte \(MBCS\) rappresentano un approccio meno recente alla necessità di supportare i set di caratteri che, come quello giapponese o cinese, non possono essere rappresentati con un singolo byte.  Se si sta effettuando un nuovo sviluppo, si consiglia di utilizzare il formato Unicode per tutte le stringhe di testo eccetto per le stringhe di sistema che, probabilmente, non sono visualizzate dagli utenti finali.  Il formato MBCS è una tecnologia legacy e non è consigliabile per le nuove tecniche di sviluppo.  
  
 L'implementazione MBCS più comune è costituita da Double Byte Character Set \(DBCS\).  Visual C\+\+ in generale e MFC in particolare sono completamente abilitati per DBCS.  
  
> [!WARNING]
>  In Visual Studio 2013 e versioni successive le librerie MFC per la codifica dei caratteri multibyte \(MBCS\) vengono fornite come componente aggiuntivo di Visual Studio e saranno disponibili gratuitamente per i clienti di Visual Studio \(solo edizioni Professional ed Enterprise\) dal sito di download di MSDN.  
>   
>  Le librerie richiedono circa 440 MB nel disco e l'installazione include tutte le versioni localizzate delle librerie.  È possibile installarle in qualsiasi computer in cui è installato Visual Studio Community, Professional o Enterprise e in cui è abilitata la funzionalità MFC predefinita.  
>   
>  Se si disinstalla o si ripristina Visual Studio, anche le librerie MBCS saranno disinstallate o ripristinate.  Tuttavia, se si disabilita semplicemente la funzionalità MFC, le librerie MBCS rimarranno nel sistema.  Se si ripristinano le librerie MBCS, Visual Studio non viene modificato in alcun modo.  
>   
>  I pacchetti ridistribuibili per Visual Studio 2013 e versioni successive includeranno ancora le DLL MBCS MFC.  Non sono necessari passaggi aggiuntivi per ridistribuire le DLL ai clienti.  
  
 Per gli esempi, vedere i file del codice sorgente MFC.  
  
 Per le piattaforme usate nei mercati le cui lingue usano set di caratteri di grandi dimensioni, l'alternativa migliore a Unicode è MBCS.  MFC supporta MBCS attraverso l'uso di tipi di dati per i mercati internazionali e le funzioni di runtime C.  È consigliabile optare per la stessa scelta nel codice.  
  
 In MBCS i caratteri vengono codificati in 1 o 2 byte.  Nei caratteri a 2 byte il primo byte, o byte di apertura, segnala che questo byte e quello successivo devono essere interpretati come un carattere.  Il primo byte proviene da un intervallo di codici riservati per l'uso come byte di apertura.  Gli intervalli di byte che possono essere usati come byte di apertura dipendono dalla tabella codici in uso.  Ad esempio, la tabella codici giapponese 932 usa l'intervallo compreso tra 0x81 e 0x9F come byte di apertura, mentre la tabella codici coreana 949 usa un intervallo diverso.  
  
 Per la programmazione MBCS, tenere presenti tutte le considerazioni seguenti.  
  
 Caratteri MBCS nell'ambiente  
 I caratteri MBCS possono essere visualizzati in stringhe, ad esempio in nomi di file e directory.  
  
 Operazioni di modifica  
 Le operazioni di modifica nelle applicazioni MBCS devono intervenire sui caratteri e non sui byte.  Il cursore non deve dividere un carattere, il tasto freccia DESTRA deve spostare il cursore a destra di un carattere e così via.  **CANC** deve eliminare un carattere, **Annulla** lo deve reinserire.  
  
 Gestione delle stringhe  
 In un'applicazione che usa MBCS la gestione delle stringhe pone problemi speciali.  Poiché caratteri di entrambe le larghezze vengono combinati in un'unica stringa, è necessario ricordare di controllare i byte di apertura.  
  
 Supporto delle librerie di runtime  
 La libreria di runtime C e MFC supportano programmazione a un byte, MBCS e Unicode.  Le stringhe a un byte vengono elaborate con la famiglia `str` di funzioni di runtime, le stringhe MBCS con le funzioni `_mbs` corrispondenti e le stringhe Unicode con le funzioni *wcs* corrispondenti.  Le implementazioni delle funzioni membro delle classi MFC usano funzioni di runtime portabili mappate, nelle situazioni appropriate, alla normale famiglia `str` di funzioni, le funzioni MBCS o le funzioni Unicode, come descritto in "Portabilità di MBCS\/Unicode".  
  
 Portabilità di MBCS\/Unicode  
 Usando il file di intestazione Tchar.h, è possibile compilare applicazioni a un byte, MBCS e Unicode dalle stesse origini.  Il file Tchar.h definisce le macro precedute dal prefisso *\_tcs*, mappate a funzioni `str`, `_mbs` o *wcs* nel modo appropriato.  Per compilare applicazioni MBCS, definire il simbolo **\_MBCS**.  Per compilare applicazioni Unicode, definire il simbolo **\_UNICODE**.  Per impostazione predefinita, per le applicazioni MFC viene definito **\_MBCS**.  Per altre informazioni, vedere [Mapping di testo generico in Tchar.h](../text/generic-text-mappings-in-tchar-h.md).  
  
> [!NOTE]
>  Il comportamento non è definito se si specificano sia **\_UNICODE** sia **\_MBCS**.  
  
 I file di intestazione Mbctype.h e Mbstring.h definiscono funzioni e macro specifiche di MBCS, che possono essere necessarie in alcuni casi.  Ad esempio, `_ismbblead` indica se un byte specifico in una stringa è un byte di apertura.  
  
 Per ottenere portabilità internazionale, scrivere il codice del programma con set di caratteri [Unicode](../text/support-for-unicode.md) o Multibyte Character Set \(MBCS\).  
  
## Selezionare l'operazione da eseguire.  
  
-   [Abilitare MBCS in un programma](../text/international-enabling.md)  
  
-   [Abilitare i formati Unicode MBCS in un programma](../text/internationalization-strategies.md)  
  
-   [Usare MBCS per creare un programma per mercati internazionali](../text/mbcs-programming-tips.md)  
  
-   [Esaminare un riepilogo della programmazione MBCS](../text/mbcs-programming-tips.md)  
  
-   [Informazioni sulle mappature di testo generico per la portabilità della larghezza dei byte](../text/generic-text-mappings-in-tchar-h.md)  
  
## Vedere anche  
 [Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)   
 [Supporto per MBCS in Visual C\+\+](../text/mbcs-support-in-visual-cpp.md)