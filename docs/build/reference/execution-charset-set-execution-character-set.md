---
title: /Execution-CharSet (imposta il set di caratteri di esecuzione)
ms.date: 02/06/2019
f1_keywords:
- execution-charset
- /execution-charset
helpviewer_keywords:
- /execution-charset compiler option
- -execution-charset compiler option
ms.assetid: 0e02f487-2236-45bc-95f3-5760933a8f96
ms.openlocfilehash: 44e83524867bc8a914706e1f5b45b61bc4a48087
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492907"
---
# <a name="execution-charset-set-execution-character-set"></a>/Execution-CharSet (imposta il set di caratteri di esecuzione)

Consente di specificare il set di caratteri di esecuzione per il file eseguibile.

## <a name="syntax"></a>Sintassi

```
/execution-charset:[IANA_name|.CPID]
```

## <a name="arguments"></a>Argomenti

*IANA_name*<br/>
Nome del set di caratteri definito da IANA.

*CPID*<br/>
Identificatore della tabella codici.

## <a name="remarks"></a>Note

È possibile utilizzare l'opzione **/Execution-charset** per specificare un set di caratteri di esecuzione. Il set di caratteri di esecuzione è la codifica utilizzata per il testo del programma che è l'input della fase di compilazione dopo tutti i passaggi di pre-elaborazione. Questo set di caratteri viene usato per la rappresentazione interna di qualsiasi stringa o valore letterale carattere nel codice compilato. Impostare questa opzione per specificare il set di caratteri di esecuzione esteso da utilizzare quando i file di origine includono caratteri non rappresentabili nel set di caratteri di esecuzione di base. È possibile utilizzare il nome del set di caratteri IANA o ISO oppure un punto (.) seguito da un identificatore di tabella codici decimale da 3 a 5 cifre per specificare il set di caratteri da utilizzare. Per un elenco degli identificatori della tabella codici e dei nomi dei set di caratteri supportati, vedere identificatori della [tabella codici](/windows/win32/Intl/code-page-identifiers).

Per impostazione predefinita, Visual Studio rileva un indicatore per l'ordine dei byte per determinare se il file di origine si trova in un formato Unicode codificato, ad esempio UTF-16 o UTF-8. Se non viene trovato alcun indicatore dell'ordine dei byte, si presuppone che il file di origine sia codificato utilizzando la tabella codici utente corrente, a meno che non sia stato specificato un nome del set di caratteri o una tabella codici utilizzando l'opzione **/source-charset** o l'opzione **/UTF-8** . Visual Studio consente di salvare il C++ codice sorgente usando una qualsiasi delle diverse codifiche di caratteri. Per informazioni sui set di caratteri di origine ed esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione della lingua.

Se si desidera impostare il set di caratteri di origine e il set di caratteri di esecuzione su UTF-8, è possibile utilizzare l'opzione del compilatore **/UTF-8** come collegamento. Equivale a specificare **/source-charset: UTF-8/Execution-charset: UTF-8** nella riga di comando. Ognuna di queste opzioni Abilita anche l'opzione **/Validate-charset** per impostazione predefinita.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere la cartella **proprietà di configurazione**, **CC++/** , riga di **comando** .

1. In **Opzioni aggiuntive**aggiungere l'opzione **/Execution-charset** e specificare la codifica preferita.

1. Scegliere **OK** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/source/charset (imposta il set di caratteri di origine)](source-charset-set-source-character-set.md)<br/>
[/utf/8 (imposta i set di caratteri eseguibili e di origine su UTF/8)](utf-8-set-source-and-executable-character-sets-to-utf-8.md)<br/>
[/validate/charset (convalida per i caratteri compatibili)](validate-charset-validate-for-compatible-characters.md)
