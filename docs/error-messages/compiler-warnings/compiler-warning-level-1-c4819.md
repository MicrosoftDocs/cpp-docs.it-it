---
title: Avviso del compilatore (livello 1) C4819
ms.date: 04/08/2019
f1_keywords:
- C4819
helpviewer_keywords:
- C4819
ms.assetid: c0316e85-249c-414d-9df0-622d077c6bc2
ms.openlocfilehash: f81a4f44a489e2e4c5bd5c063d922129581819f9
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91509369"
---
# <a name="compiler-warning-level-1-c4819"></a>Avviso del compilatore (livello 1) C4819

> Il file contiene un carattere che non può essere rappresentato nella tabella codici corrente (*numero*). Salvare il file in formato Unicode per evitare perdite di dati.

C4819 si verifica quando si compila un file di origine ANSI in un sistema utilizzando una tabella codici che non può rappresentare tutti i caratteri del file.

Esistono diversi modi per risolvere C4819. Un modo semplice consiste nel rimuovere il carattere offensivo, se non è necessario, ad esempio, se si trova in un commento. È possibile impostare la tabella codici di sistema nel pannello di controllo su uno che supporta il set di caratteri usato dal codice sorgente. È possibile usare le [sequenze di escape](../../c-language/escape-sequences.md) Unicode per creare caratteri o stringhe che usano solo il set di caratteri ANSI di base nel codice sorgente. Infine, è possibile salvare il file in un formato Unicode con una firma, nota anche come BOM (Byte Order Mark).

Per salvare un file in formato Unicode, in Visual Studio scegliere **file**  >  **Salva con nome**. Nella finestra di dialogo **Salva file con nome** selezionare l'elenco a discesa del pulsante **Salva** e scegliere **Salva con codifica**. Se si salva lo stesso nome di file, potrebbe essere necessario confermare che si desidera sostituire il file. Nella finestra di dialogo **Opzioni di salvataggio avanzate** scegliere una codifica che può rappresentare tutti i caratteri nel file, ad esempio **Unicode (UTF-8 con firma)-tabella codici 65001**, quindi scegliere **OK**.
