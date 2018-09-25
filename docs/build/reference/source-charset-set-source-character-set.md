---
title: -source-charset (Set di caratteri di origine Set) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- source-charset
- /source-charset
dev_langs:
- C++
helpviewer_keywords:
- /execution-charset compiler option
ms.assetid: d3c5bf7f-526d-4ee4-acc5-c1a02a4fc481
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 14c8d40f508096822a741bac65f4d553a6804120
ms.sourcegitcommit: 92c568e9466ffd7346a4120c478c9bdea61c8756
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/24/2018
ms.locfileid: "47029645"
---
# <a name="source-charset-set-source-character-set"></a>/Source-CharSet (Imposta origine Set di caratteri)

Consente di specificare l'origine set di caratteri per il file eseguibile.

## <a name="syntax"></a>Sintassi

```
/source-charset:[IANA_name|.CPID]
```

## <a name="arguments"></a>Argomenti

**IANA_name**<br/>
Nome del set di caratteri definito dall'autorità IANA.

**CPID**<br/>
Identificatore della tabella codici come numero decimale.

## <a name="remarks"></a>Note

È possibile usare la **/source-charset** opzione per specificare un carattere di origine estesi set da utilizzare quando i file di origine contengono caratteri che non sono rappresentati nel set di caratteri di origine di base. Il set di caratteri di origine è la codifica usata per interpretare il testo di origine di programma nella rappresentazione interna usata come input per le fasi di pre-elaborazione prima della compilazione. Tale rappresentazione viene quindi convertita al set di caratteri di esecuzione per archiviare i valori stringa e carattere nel file eseguibile. È possibile usare entrambi IANA o nome del set di caratteri ISO o un punto (.) seguito da un identificatore della tabella codici decimale da 3 a 5 cifre per specificare il set di caratteri da usare. Per un elenco di identificatori di pagina di codice è supportata e i nomi dei set di caratteri, vedere [identificatori di pagina codice](/windows/desktop/Intl/code-page-identifiers).

Per impostazione predefinita, Visual Studio rileva un contrassegno di ordine dei byte per determinare se il file di origine è in un formato con codifica Unicode, ad esempio UTF-16 o UTF-8. Se viene individuato alcun indicatore ordine byte, si presuppone che il file di origine viene codificato utilizzando la tabella codici utente corrente, se non si specifica un set di caratteri nome o la tabella codici con il **/source-charset** opzione. Visual Studio consente di salvare il codice sorgente C++, utilizzando una delle diverse codifiche di caratteri. Per altre informazioni sui set di caratteri di origine e di esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione del linguaggio.

Il set di caratteri di origine che è fornire deve eseguire il mapping di caratteri ASCII a 7 bit agli stessi punti di codice nel set di caratteri o molti errori di compilazione sono probabile che seguono. Il set di caratteri di origine deve anche essere disponibile per il mapping a caratteri estesi Unicode impostato codificabili da UTF-8. Caratteri che non sono codificabili in UTF-8 sono rappresentati da un sostituto specifici dell'implementazione. Il compilatore Microsoft Usa un punto interrogativo per questi caratteri.

Se si desidera impostare il set di caratteri di origine e il set di caratteri di esecuzione su UTF-8, è possibile usare la **/utf-8** l'opzione del compilatore come collegamento. Equivale a specificare **/Source -charset:utf-/execution 8-charset:utf-8** nella riga di comando. Una di queste opzioni anche Abilita il **/Validate/CharSet** opzione per impostazione predefinita.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Espandere la **le proprietà di configurazione**, **C/C++**, **riga di comando** cartella.

1. Nelle **opzioni avanzate**, aggiungere il **/source-charset** opzione e specificare la codifica preferita.

1. Scegli **OK** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[/Execution-CharSet (set esecuzione Set di caratteri)](../../build/reference/execution-charset-set-execution-character-set.md)<br/>
[/utf/8 (imposta i set di caratteri eseguibili e di origine su UTF/8)](../../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md)<br/>
[/validate/charset (convalida per i caratteri compatibili)](../../build/reference/validate-charset-validate-for-compatible-characters.md)