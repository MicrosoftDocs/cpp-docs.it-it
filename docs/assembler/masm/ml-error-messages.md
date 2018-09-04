---
title: Messaggi di errore ML | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- vc.errors.ml
dev_langs:
- C++
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), ML error messages
ms.assetid: e7e164b3-6d65-4b5b-8925-bfbebc043523
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 836daf438fa5a7f4c797b5b15ffab89720a7af98
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43675965"
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