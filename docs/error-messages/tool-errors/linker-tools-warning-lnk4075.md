---
title: Avviso degli strumenti del linker LNK4075
ms.date: 11/04/2016
f1_keywords:
- LNK4075
helpviewer_keywords:
- LNK4075
ms.assetid: f39ad3f9-c263-4cf0-9d70-259fc56ac96d
ms.openlocfilehash: e4a385b9559e2f54e81bda76e6dd13505e978a74
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80183488"
---
# <a name="linker-tools-warning-lnk4075"></a>Avviso degli strumenti del linker LNK4075

"opzione1" verrà ignorato a causa della specifica "opzione2"

La seconda opzione esegue l'override della prima.

Sono state specificate le opzioni del linker che si escludono a vicenda.  Esaminare le opzioni del linker.  Le opzioni del linker specificate variano a seconda della modalità di compilazione del progetto.

- Se si esegue la compilazione nell'ambiente di sviluppo, cercare nelle pagine delle proprietà del linker per il progetto e vedere dove sono specificate entrambe le opzioni del linker.  Per ulteriori informazioni, vedere [impostare le proprietà del compilatore e della compilazione](../../build/working-with-project-properties.md) .

- Se si compila dalla riga di comando, esaminare le opzioni del linker specificate.

- Se si compila con script di compilazione, esaminare gli script per vedere dove vengono specificate le opzioni del linker.

Quando si trova la posizione in cui vengono specificate le opzioni del linker che si escludono a vicenda, rimuovere una delle opzioni del linker.

Alcuni esempi specifici:

- Se si collega un modulo compilato con **/Zi**, che implica un'opzione del linker interna denominata/EDITANDCONTINUE e un modulo compilato con/opt: Ref,/opt: ICF o/INCREMENTAL: No, che non implica/EDITANDCONTINUE, si otterrà LNK4075.  Per ulteriori informazioni [, vedere/Z7,/Zi,/Zi (formato informazioni di debug)](../../build/reference/z7-zi-zi-debug-information-format.md) .
