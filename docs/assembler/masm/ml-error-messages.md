---
title: Messaggi di errore ML
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- vc.errors.ml
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), ML error messages
ms.assetid: e7e164b3-6d65-4b5b-8925-bfbebc043523
ms.openlocfilehash: aa0440afae980e218c32ab3296bd7c6fb2b444d9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50677799"
---
# <a name="ml-error-messages"></a>Messaggi di errore ML

I messaggi di errore generati dai componenti MASM sono suddivisi in tre categorie:

- **Errori irreversibili.** Queste informazioni indicano un problema grave che impedisce l'utilità di completare il processo normale.

- **Errori non irreversibili.** L'utilità venga completato il processo. In caso affermativo, il risultato non è probabilmente quello desiderato.

- **Avvisi.** Questi messaggi indicano le condizioni che potrebbero impedire di ottenere i risultati desiderati.

Tutti i messaggi di errore hanno il formato seguente:

> *Utility*: *Filename* (*riga*): {*Error_type*} (*codice*): *Testo_Messaggio*

dove:

*Utilità*<br/>
Il programma che ha inviato il messaggio di errore.

*Nome file*<br/>
Il file che contiene la condizione di errore di generazione.

*Line*<br/>
La riga approssimativa in cui è presente la condizione di errore.

*Error_type*<br/>
Errore irreversibile errore, errore o avviso.

*Codice*<br/>
Il codice di errore univoco 5 o 6 cifre.

*Testo_Messaggio*<br/>
Descrizione breve e generale della condizione di errore.

## <a name="see-also"></a>Vedere anche

[Riferimento a Microsoft Macro Assembler](../../assembler/masm/microsoft-macro-assembler-reference.md)<br/>