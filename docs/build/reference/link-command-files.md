---
title: File di comando di LINK
ms.date: 09/05/2018
f1_keywords:
- link
helpviewer_keywords:
- syntax, LINK command files
- command files [C++]
- LINK tool [C++]
- text files, passing arguments to LINK
- LINK tool [C++], command-line syntax
- command files [C++], LINK
ms.assetid: 7154511c-32b9-4e5b-a515-3922fa9de48e
ms.openlocfilehash: 3a116736a6ed00ea4d378e68c6f515aa96ea2f99
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50676447"
---
# <a name="link-command-files"></a>File di comando di LINK

È possibile passare argomenti della riga di comando di collegamento sotto forma di un file di comando. Per specificare un file di comando del linker, usare la sintassi seguente:

> **COLLEGAMENTO \@**  <em>commandfile</em>

Il *commandfile* è il nome di un file di testo. Non è consentito alcun spazio o tabulazione tra il simbolo di chiocciola (**\@**) e il nome del file. Non vi è alcuna estensione predefinita; è necessario specificare il nome file completo, inclusa qualsiasi estensione. Non è possibile usare caratteri jolly. È possibile specificare un percorso relativo o assoluto con il nome del file. COLLEGAMENTO non utilizza una variabile di ambiente per cercare il file.

Nel file di comando, gli argomenti possono essere separati da spazi o tabulazioni (come nella riga di comando) e caratteri di nuova riga.

È possibile specificare tutto o parte della riga di comando in un file di comando. È possibile usare più di un file di comando in un comando di collegamento. COLLEGAMENTO accetta l'input di file di comando come se fosse specificato in tale posizione nella riga di comando. File di comando non possono essere annidati. COLLEGAMENTO di restituisce il contenuto dei file di comando, a meno che il [/NOLOGO](../../build/reference/nologo-suppress-startup-banner-linker.md) opzione specificata.

## <a name="example"></a>Esempio

Il comando seguente per compilare una DLL vengono passati i nomi dei file oggetto e librerie in file separati per comandi e Usa un terzo comando file per la specifica dell'opzione /EXPORTS:

```cmd
link /dll @objlist.txt @liblist.txt @exports.txt
```

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)