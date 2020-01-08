---
title: Messaggi di errore ML
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- vc.errors.ml
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), ML error messages
ms.assetid: e7e164b3-6d65-4b5b-8925-bfbebc043523
ms.openlocfilehash: 1b065433a1a6baf9bf2631aeb2f53421f8efb83b
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75312625"
---
# <a name="ml-error-messages"></a>Messaggi di errore ML

I messaggi di errore generati dai componenti MASM rientrano in tre categorie:

- **Errori irreversibili.** Che indicano un problema grave che impedisce all'utilità di completare il normale processo.

- **Errori non irreversibili.** L'utilità può completare il processo. In caso contrario, è probabile che il risultato non sia quello desiderato.

- **Avvisi.** Questi messaggi indicano le condizioni che possono impedire di ottenere i risultati desiderati.

Tutti i messaggi di errore hanno il formato seguente:

> *Utilità*: *nomefile* (*riga*): {*Error_type*} (*codice*): *Message_text*

dove:

\ di *utilità*
Programma che ha inviato il messaggio di errore.

\ *filename*
Il file che contiene la condizione di generazione degli errori.

\ *linea*
Riga approssimativa in cui è presente la condizione di errore.

*Error_type*\
Errore irreversibile, errore o avviso.

*Codice*\
Codice di errore univoco a 5 o 6 cifre.

*Message_text*\
Descrizione breve e generale della condizione di errore.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento a Microsoft Macro Assembler](microsoft-macro-assembler-reference.md)
