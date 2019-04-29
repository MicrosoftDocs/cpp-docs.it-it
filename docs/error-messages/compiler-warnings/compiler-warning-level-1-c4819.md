---
title: Avviso del compilatore (livello 1) C4819
ms.date: 04/08/2019
f1_keywords:
- C4819
helpviewer_keywords:
- C4819
ms.assetid: c0316e85-249c-414d-9df0-622d077c6bc2
ms.openlocfilehash: d43b49d473e7113d8cdfb89aaa6e93045e13d0f7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62406314"
---
# <a name="compiler-warning-level-1-c4819"></a>Avviso del compilatore (livello 1) C4819

> Il file contiene un carattere che non può essere rappresentato nella tabella codici corrente (*numero*). Salvare il file in formato Unicode per evitare perdite di dati.

C4819 si verifica quando si compila un file di origine ANSI su un sistema che utilizza una tabella codici che non può rappresentare tutti i caratteri nel file.

Esistono diversi modi per risolvere C4819. Un modo semplice consiste nel rimuovere il carattere che causa l'errore, se non è necessario, ad esempio, se si trova in un commento. È possibile impostare la tabella codici del sistema nel Pannello di controllo che supporta il set di caratteri utilizzato dal codice sorgente. È possibile usare Unicode [sequenze di escape](/cpp/c-language/escape-sequences) creare caratteri o stringhe che usano solo la versione ANSI base il set di caratteri nel codice sorgente. Infine, è possibile salvare il file in formato Unicode con una firma, noto anche come un byte order mark (BOM).

Per salvare un file in formato Unicode, in Visual Studio, scegliere **File** > **Salva con nome**. Nel **Salva File con nome** finestra di dialogo, selezionare l'elenco a discesa nel **salvare** pulsante e scegliere **Salva con codifica**. Se si salva lo stesso nome di file, devi confermare che si desidera sostituire il file. Nel **opzioni di salvataggio avanzate** finestra di dialogo scegliere un tipo di codifica che può rappresentare tutti i caratteri nel file, ad esempio, **Unicode (UTF-8 con firma) - tabella codici 65001**: e quindi scegliere  **OK**.