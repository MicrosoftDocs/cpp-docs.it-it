---
description: 'Altre informazioni su: messaggi di errore ML'
title: Messaggi di errore ML
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- vc.errors.ml
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), ML error messages
ms.assetid: e7e164b3-6d65-4b5b-8925-bfbebc043523
ms.openlocfilehash: 08f9a3ccd1bfe79195bf3ba9acf5b5347cc35a1f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97129701"
---
# <a name="ml-error-messages"></a>Messaggi di errore ML

I messaggi di errore generati dai componenti MASM rientrano in tre categorie:

- **Errori irreversibili.** Che indicano un problema grave che impedisce all'utilità di completare il normale processo.

- **Errori non irreversibili.** L'utilità può completare il processo. In caso contrario, è probabile che il risultato non sia quello desiderato.

- **Avvisi.** Questi messaggi indicano le condizioni che possono impedire di ottenere i risultati desiderati.

Tutti i messaggi di errore hanno il formato seguente:

> *Utilità*: *nomefile* (*riga*): {*Error_type*} (*codice*): *Message_text*

dove:

*Utilità*\
Programma che ha inviato il messaggio di errore.

*Filename*\
Il file che contiene la condizione di generazione degli errori.

*Linea*\
Riga approssimativa in cui è presente la condizione di errore.

*Error_type*\
Errore irreversibile, errore o avviso.

*Codice*\
Codice di errore univoco a 5 o 6 cifre.

*Message_text*\
Descrizione breve e generale della condizione di errore.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento a Microsoft Macro Assembler](microsoft-macro-assembler-reference.md)
