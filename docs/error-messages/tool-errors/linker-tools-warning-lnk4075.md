---
title: Avviso degli strumenti del linker LNK4075
ms.date: 11/04/2016
f1_keywords:
- LNK4075
helpviewer_keywords:
- LNK4075
ms.assetid: f39ad3f9-c263-4cf0-9d70-259fc56ac96d
ms.openlocfilehash: bf22e7c78dce6949c357d7ad4a0c76209c88eef3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62186905"
---
# <a name="linker-tools-warning-lnk4075"></a>Avviso degli strumenti del linker LNK4075

ignorando l'opzione "1" a causa di "option2" specifica

La seconda opzione sostituisce il primo.

Vengono specificate le opzioni del linker si escludono a vicenda.  Esaminare le opzioni del linker.  In cui vengono specificate le opzioni del linker dipende dal modo in cui si sta compilando il progetto.

- Se si sta compilando nell'ambiente di sviluppo, esaminare le pagine delle proprietà del linker per il progetto e in cui vengono specificate entrambe le opzioni del linker.  Visualizzare [impostare del compilatore e proprietà di compilazione](../../build/working-with-project-properties.md) per altre informazioni.

- Se si compila dalla riga di comando, esaminare le opzioni del linker specificate non esiste.

- Se si compila con gli script di compilazione, esaminare gli script per in cui vengono specificate le opzioni del linker.

Quando si trova in cui vengono specificate le opzioni del linker si escludono a vicenda, rimuovere una delle opzioni del linker.

Alcuni esempi specifici:

- Se si collega un modulo compilato con **/ZI**, che implica un'opzione del linker interno chiamato /EDITANDCONTINUE a un modulo compilato con /OPT: REF, /OPT: ICF o /INCREMENTAL: No, che non implica Nessuna /EDITANDCONTINUE, si apprenderà come Ottieni LNK4075.  Visualizzare [/Z7, /Zi, /ZI (formato informazioni di Debug)](../../build/reference/z7-zi-zi-debug-information-format.md) per altre informazioni.