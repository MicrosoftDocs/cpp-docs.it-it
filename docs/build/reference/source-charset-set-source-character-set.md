---
description: Altre informazioni su:/source-charset (set set di caratteri di origine)
title: /source-charset (imposta il set di caratteri di origine)
ms.date: 02/06/2019
f1_keywords:
- source-charset
- /source-charset
helpviewer_keywords:
- /execution-charset compiler option
ms.assetid: d3c5bf7f-526d-4ee4-acc5-c1a02a4fc481
ms.openlocfilehash: 5ed1ea8e130dd61b4d5903570b781f36856d3e60
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224777"
---
# <a name="source-charset-set-source-character-set"></a>/source-charset (imposta il set di caratteri di origine)

Consente di specificare il set di caratteri di origine per il file eseguibile.

## <a name="syntax"></a>Sintassi

```
/source-charset:[IANA_name|.CPID]
```

## <a name="arguments"></a>Argomenti

**IANA_name**<br/>
Nome del set di caratteri definito da IANA.

**CPID**<br/>
Identificatore della tabella codici come numero decimale.

## <a name="remarks"></a>Commenti

È possibile usare l'opzione **/source-charset** per specificare un set di caratteri di origine esteso da usare quando i file di origine includono caratteri non rappresentati nel set di caratteri di origine di base. Il set di caratteri di origine è la codifica utilizzata per interpretare il testo di origine del programma nella rappresentazione interna utilizzata come input per le fasi di pre-elaborazione prima della compilazione. La rappresentazione interna viene quindi convertita nel set di caratteri di esecuzione per archiviare i valori stringa e carattere nel file eseguibile. È possibile utilizzare il nome del set di caratteri IANA o ISO oppure un punto (.) seguito da un identificatore di tabella codici decimale da 3 a 5 cifre per specificare il set di caratteri da utilizzare. Per un elenco degli identificatori della tabella codici e dei nomi dei set di caratteri supportati, vedere [identificatori della tabella codici](/windows/win32/Intl/code-page-identifiers).

Per impostazione predefinita, Visual Studio rileva un indicatore per l'ordine dei byte per determinare se il file di origine si trova in un formato Unicode codificato, ad esempio UTF-16 o UTF-8. Se non viene trovato alcun indicatore dell'ordine dei byte, si presuppone che il file di origine sia codificato utilizzando la tabella codici utente corrente, a meno che non si specifichi un nome del set di caratteri o una tabella codici utilizzando l'opzione **/source-charset** . Visual Studio consente di salvare il codice sorgente C++ usando una qualsiasi delle diverse codifiche di caratteri. Per ulteriori informazioni sui set di caratteri di origine ed esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione relativa al linguaggio.

Il set di caratteri di origine fornito deve eseguire il mapping tra i caratteri ASCII a 7 bit e gli stessi punti di codice del set di caratteri oppure è probabile che si verifichino molti errori di compilazione. Il set di caratteri di origine deve essere mappabili anche al set di caratteri Unicode esteso codificabile da UTF-8. I caratteri che non sono encodable in UTF-8 sono rappresentati da un sostituto specifico dell'implementazione. Il compilatore Microsoft usa un punto interrogativo per questi caratteri.

Se si desidera impostare il set di caratteri di origine e il set di caratteri di esecuzione su UTF-8, è possibile utilizzare l'opzione del compilatore **/UTF-8** come collegamento. Equivale a specificare **/source-charset: UTF-8/Execution-charset: UTF-8** nella riga di comando. Ognuna di queste opzioni Abilita anche l'opzione **/Validate-charset** per impostazione predefinita.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere la cartella **proprietà di configurazione**, **C/C++**, **riga di comando** .

1. In **Opzioni aggiuntive** aggiungere l'opzione **/source-charset** e specificare la codifica preferita.

1. Scegliere **OK** per salvare le modifiche.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Execution-CharSet (imposta il set di caratteri di esecuzione)](execution-charset-set-execution-character-set.md)<br/>
[/UTF-8 (imposta i set di caratteri eseguibili e di origine su UTF-8)](utf-8-set-source-and-executable-character-sets-to-utf-8.md)<br/>
[/validate/charset (Convalida per i caratteri compatibili)](validate-charset-validate-for-compatible-characters.md)
