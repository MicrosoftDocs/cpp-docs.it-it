---
title: /ZH (algoritmo hash per il calcolo del checksum dei file nelle informazioni di debug)
description: Usare l'opzione del compilatore/ZH per abilitare i checksum dei file di origine MD5, SHA-1 o SHA-256 nelle informazioni di debug
ms.date: 09/16/2019
f1_keywords:
- /ZH
- /ZH:MD5
- /ZH:SHA1
- /ZH:SHA_256
helpviewer_keywords:
- /ZH
- /ZH:MD5
- /ZH:SHA1
- /ZH:SHA_256
- /ZH compiler option
- /ZH:MD5 compiler option
- /ZH:SHA1 compiler option
- /ZH:SHA_256 compiler option
- Hash algorithm for file checksum in debug info
ms.openlocfilehash: f05dc2bc3b8ce4502ff16a6e19fdbb10763b34ba
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71686873"
---
# <a name="zh-hash-algorithm-for-calculation-of-file-checksum-in-debug-info"></a>/ZH (algoritmo hash per il calcolo del checksum dei file nelle informazioni di debug)

Specifica l'algoritmo hash di crittografia da utilizzare per generare un checksum di ogni file di origine.

## <a name="syntax"></a>Sintassi

> **/ZH:** {**MD5**|**SHA1**|**SHA_256**}

## <a name="arguments"></a>Argomenti

**/ZH: MD5**\
Usare un hash MD5 per il checksum. Questa è l'opzione predefinita.

**/ZH: SHA1**\
Usare un hash SHA-1 per il checksum.

**/ZH: SHA_256**\
Usare un hash SHA-256 per il checksum.

## <a name="remarks"></a>Note

I file PDB archiviano un checksum per ogni file di origine compilato nel codice dell'oggetto nell'eseguibile associato. Il checksum consente al debugger di verificare che il codice sorgente caricato corrisponda al file eseguibile. Il compilatore e il debugger supportano gli algoritmi hash MD5, SHA-1 e SHA-256. Per impostazione predefinita, il compilatore usa un hash MD5 per generare il checksum. È possibile specificare questa opzione in modo esplicito tramite l'opzione **/ZH: MD5** .

A causa del rischio di problemi di collisione in MD5 e SHA-1, Microsoft consiglia di usare l'opzione **/ZH: SHA_256** . L'hash SHA-256 può comportare un piccolo aumento dei tempi di compilazione.

Quando si specifica più di un'opzione **/ZH** , viene utilizzata l'ultima opzione.

L'opzione **/ZH** è disponibile a partire da Visual Studio 2019 versione 16,4.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Impostare l'elenco a discesa **configurazione** su **tutte le configurazioni**.

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++**  > **Riga di comando**.

1. Modificare la **Proprietà opzioni aggiuntive** per aggiungere un' **opzione/ZH: MD5**, **/ZH: SHA1**o **/ZH: SHA_256** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](compiler-options.md)\
[Server di origine](/windows/win32/debug/source-server-and-source-indexing)
