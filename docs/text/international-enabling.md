---
title: Abilitazione di risorse internazionali | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- globalization [C++], character sets
- strings [C++], international enabling
- localization [C++], character sets
- MBCS [C++], enabling
- Unicode [C++], enabling
ms.assetid: b077f4ca-5865-40ef-a46e-d9e4d686ef21
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2f4edcae610f17409c319c7b4bd39dc137e1211e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33858702"
---
# <a name="international-enabling"></a>Abilitazione di risorse internazionali
Codice C e C++ più tradizionale ipotizza la modifica di tipo stringa e carattere che non funzionano anche per le applicazioni internazionali. MFC e la libreria run-time supportano Unicode e MBCS, è ancora presente lavoro per eseguire. A tal fine, in questa sezione viene illustrato il significato di "abilitazione di risorse internazionali" in Visual C++:  
  
-   Unicode e MBCS, saranno disponibili tramite i tipi di dati trasferibili in MFC elenchi di parametri di funzione e tipi restituiti. Questi tipi sono definiti in modo condizionale nei modi appropriati, a seconda se la compilazione definisce il simbolo **Unicode** o il simbolo **MBCS** (ovvero DBCS). Varianti diverse delle librerie MFC sono collegate automaticamente con l'applicazione, a seconda di quale di questi due simboli definisce la compilazione.  
  
-   Il codice di libreria di classe Usa funzioni di runtime portabili e altri mezzi per assicurare il corretto funzionamento di Unicode e MBCS.  
  
-   È comunque necessario gestire determinati tipi di attività di internazionalizzazione del codice:  
  
    -   Utilizzare le stesse funzioni portabile in fase di esecuzione che rendono MFC in entrambi gli ambienti.  
  
    -   Verificare in entrambi gli ambienti, le stringhe letterali e caratteri utilizzando la **t** (macro). Per ulteriori informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).  
  
    -   Adottare le precauzioni durante l'analisi di stringhe in formato MBCS. Tali precauzioni non sono necessarie in Unicode. Per ulteriori informazioni, vedere [suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md).  
  
    -   Prestare attenzione se si combinano ANSI (8 bit) e i caratteri Unicode (16 bit) nell'applicazione. È possibile utilizzare caratteri ANSI in alcune parti del programma e i caratteri Unicode in altri, ma è possibile combinarli nella stessa stringa.  
  
    -   Non le stringhe hardcoded nell'applicazione. In alternativa, renderli risorse STRINGTABLE aggiungendoli al file RC dell'applicazione. L'applicazione può quindi essere localizzata senza richiedere modifiche al codice sorgente o la ricompilazione. Per ulteriori informazioni sulle risorse STRINGTABLE, vedere [Editor stringa](../windows/string-editor.md).  
  
> [!NOTE]
>  Set di caratteri europea e MBCS dispone di alcuni caratteri, ad esempio le lettere accentate, con i codici di carattere maggiori di 0x80. Poiché la maggior parte di codice utilizza caratteri con segno, questi caratteri maggiori 0x80 sono esteso con segno quando convertito in `int`. In questo modo un problema per l'indicizzazione di matrice di caratteri con segno esteso, essendo negativi, gli indici di fuori della matrice. Le lingue che utilizzano il formato MBCS, ad esempio giapponese, anche sono univoche. Perché un carattere può essere costituito da 1 o 2 byte, è sempre necessario utilizzare entrambi i byte nello stesso momento.  
  
## <a name="see-also"></a>Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Strategie di internazionalizzazione](../text/internationalization-strategies.md)