---
title: /Execution-CharSet (set esecuzione Set di caratteri)
ms.date: 02/06/2019
f1_keywords:
- execution-charset
- /execution-charset
helpviewer_keywords:
- /execution-charset compiler option
- -execution-charset compiler option
ms.assetid: 0e02f487-2236-45bc-95f3-5760933a8f96
ms.openlocfilehash: 0a140bf438a44df152b1578f4569a087a604061c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62271437"
---
# <a name="execution-charset-set-execution-character-set"></a>/Execution-CharSet (set esecuzione Set di caratteri)

Consente di specificare caratteri di esecuzione impostati per il file eseguibile.

## <a name="syntax"></a>Sintassi

```
/execution-charset:[IANA_name|.CPID]
```

## <a name="arguments"></a>Argomenti

*IANA_name*<br/>
Nome del set di caratteri definito dall'autorità IANA.

*CPID*<br/>
Identificatore della tabella codici.

## <a name="remarks"></a>Note

È possibile usare la **/execution-charset** opzione per specificare un set di caratteri di esecuzione. Il set di caratteri di esecuzione è la codifica usata per il testo del programma che viene eseguito l'input per la fase di compilazione dopo che tutti i passaggi di pre-elaborazione. Questo set di caratteri viene utilizzato per la rappresentazione interna di valori letterali stringa o un carattere nel codice compilato. Impostare questa opzione per specificare il set di caratteri di esecuzione estesa da utilizzare quando i file di origine contengono caratteri che non sono rappresentabili nel set di caratteri di esecuzione di base. È possibile usare entrambi IANA o nome del set di caratteri ISO o un punto (.) seguito da un identificatore della tabella codici decimale da 3 a 5 cifre per specificare il set di caratteri da usare. Per un elenco di identificatori di pagina di codice è supportata e i nomi dei set di caratteri, vedere [identificatori di pagina codice](/windows/desktop/Intl/code-page-identifiers).

Per impostazione predefinita, Visual Studio rileva un contrassegno di ordine dei byte per determinare se il file di origine è in un formato con codifica Unicode, ad esempio UTF-16 o UTF-8. Se viene individuato alcun indicatore ordine byte, si presuppone che il file di origine viene codificato utilizzando la tabella codici utente corrente, a meno che non è stato specificato un set di caratteri nome o la tabella codici con il **/source-charset** opzione o **/utf-8** opzione. Visual Studio consente di salvare il codice sorgente C++, utilizzando una delle diverse codifiche di caratteri. Per informazioni sui set di caratteri di origine e di esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione del linguaggio.

Se si desidera impostare il set di caratteri di origine e il set di caratteri di esecuzione su UTF-8, è possibile usare la **/utf-8** l'opzione del compilatore come collegamento. Equivale a specificare **/Source -charset:utf-/execution 8-charset:utf-8** nella riga di comando. Una di queste opzioni anche Abilita il **/Validate/CharSet** opzione per impostazione predefinita.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere la **le proprietà di configurazione**, **C/C++**, **riga di comando** cartella.

1. Nelle **opzioni aggiuntive**, aggiungere il **/execution-charset** opzione e specificare la codifica preferita.

1. Scegliere **OK** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/source/charset (imposta il set di caratteri di origine)](source-charset-set-source-character-set.md)<br/>
[/utf/8 (imposta i set di caratteri eseguibili e di origine su UTF/8)](utf-8-set-source-and-executable-character-sets-to-utf-8.md)<br/>
[/validate/charset (convalida per i caratteri compatibili)](validate-charset-validate-for-compatible-characters.md)
