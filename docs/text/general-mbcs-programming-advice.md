---
title: Suggerimenti sulla programmazione MBCS generale | Documenti Microsoft
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
- MBCS [C++], dialog box fonts
- MS Shell Dlg
- MBCS [C++], programming
- dialog boxes [C++], fonts
ms.assetid: 7b541235-f3e5-4af0-b2c2-a0112cd5fbfb
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ab2b67c82a04a0c355761ec6572a9718d03c4666
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33855799"
---
# <a name="general-mbcs-programming-advice"></a>Suggerimenti generali sulla programmazione MBCS
Utilizzare i suggerimenti seguenti:  
  
-   Per maggiore flessibilità, utilizzare le macro in fase di esecuzione, ad esempio `_tcschr` e `_tcscpy` quando possibile. Per ulteriori informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).  
  
-   Usare il run-time C `_getmbcp` funzione per ottenere informazioni su tabella codici corrente.  
  
-   Non riutilizzare le risorse stringa. A seconda del linguaggio di destinazione, una determinata stringa potrebbe avere un significato diverso quando convertito. Ad esempio, dal menu principale di "File" dell'applicazione può convertire in modo diverso dalla stringa "File" in una finestra di dialogo. Se è necessario utilizzare più di una stringa con lo stesso nome, utilizzare gli ID di stringa diversa per ognuno.  
  
-   Si potrebbe voler scoprire se l'applicazione è in esecuzione in un sistema operativo-il formato MBCS. A tale scopo, impostare un flag all'avvio del programma. non fare affidamento su chiamate API.  
  
-   Durante la progettazione di finestre di dialogo Consenti circa il 30% spazio vuoto alla fine dei controlli di testo statico per la conversione MBCS.  
  
-   Prestare attenzione quando si seleziona tipi di carattere per l'applicazione, perché alcuni tipi di carattere non sono disponibili in tutti i sistemi.  
  
-   Quando si seleziona il tipo di carattere per le finestre di dialogo, utilizzare [MS Shell Dlg](http://msdn.microsoft.com/library/windows/desktop/dd374112) anziché MS Sans Serif o Helvetica. MS Shell Dlg viene sostituito con il tipo di carattere dal sistema prima di creare la finestra di dialogo. L'utilizzo di MS Shell Dlg garantisce che tutte le modifiche nel sistema operativo per affrontare questo tipo di carattere saranno automaticamente disponibili. (MFC sostituisce MS Shell Dlg con DEFAULT_GUI_FONT o il carattere di sistema in Windows 95, Windows 98 e Windows NT 4 poiché tali sistemi non gestiscono correttamente MS Shell Dlg.)  
  
-   Quando si progetta l'applicazione, decidere quali stringhe possono essere localizzate. In caso di dubbio, si supponga che una stringa da localizzare. Di conseguenza, non combinare stringhe che possono essere localizzate con quelli che non è possibile.  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Incremento e decremento dei puntatori](../text/incrementing-and-decrementing-pointers.md)