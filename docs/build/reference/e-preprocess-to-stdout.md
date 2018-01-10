---
title: -E (pre-elabora in stdout) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /e
dev_langs: C++
helpviewer_keywords:
- -E compiler option [C++]
- /E compiler option [C++]
- preprocessor output, copy to stdout
- preprocessor output
ms.assetid: ddbb1725-d950-4978-ab2f-30a5cd7b778c
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ed083c960421ce17c0ce61036cd05191fc12c797
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="e-preprocess-to-stdout"></a>/E (Pre-elabora in stdout)
Pre-elabora i file di origine C e C++ e copia i file pre-elaborati per il dispositivo di output standard.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/E  
```  
  
## <a name="remarks"></a>Note  
 In questo processo, vengono eseguite tutte le direttive del preprocessore, espansioni della macro vengono eseguite e i commenti vengono rimossi. Per mantenere i commenti nell'output pre-elaborato, utilizzare il [/C (mantenere i commenti durante la pre-elaborazione)](../../build/reference/c-preserve-comments-during-preprocessing.md) anche l'opzione del compilatore.  
  
 **/E** aggiunge `#line` direttive all'output all'inizio e alla fine di ogni file incluso e intorno alle righe rimosse dalle direttive del preprocessore per la compilazione condizionale. Queste direttive rinumerano le righe del file pre-elaborato. Di conseguenza, gli errori generati durante le fasi successive dell'elaborazione fanno riferimento ai numeri di riga del file di origine originale anziché alle righe del file pre-elaborato.  
  
 Il **/E** opzione disattiva la compilazione. È necessario inviare nuovamente il file pre-elaborato per la compilazione. **/E** inoltre si eliminano i file di output dal **/FA**, **/Fa**, e **/Fm** opzioni. Per ulteriori informazioni, vedere [/FA, /Fa (File di listato)](../../build/reference/fa-fa-listing-file.md) e [/Fm (nome file MAP)](../../build/reference/fm-name-mapfile.md).  
  
 Esclusione di `#line` direttive, utilizzare il [/EP (pre-elabora in stdout senza direttive #line)](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) opzione.  
  
 Per inviare l'output pre-elaborato in un file anziché a `stdout`, utilizzare il [/P (pre-elabora in un File)](../../build/reference/p-preprocess-to-a-file.md) opzione.  
  
 Esclusione di `#line` direttive e inviare l'output pre-elaborato in un file, utilizzare **/p** e **/EP** insieme.  
  
 Non è possibile utilizzare le intestazioni precompilate con il **/E** opzione.  
  
 Si noti che quando si pre-elaborazione in un file separato, gli spazi non vengono creati dopo i token. Questo può comportare un programma non valido o avere effetti collaterali imprevisti. Il seguente programma viene compilato correttamente:  
  
```  
#define m(x) x  
m(int)main( )  
{  
   return 0;  
}  
```  
  
 Tuttavia, se si compila con:  
  
```  
cl -E test.cpp > test2.cpp  
```  
  
 `int main`in test2 erroneamente sarà `intmain`.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella **opzioni aggiuntive**casella.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.  
  
## <a name="example"></a>Esempio  
 La seguente riga di comando pre-elabora `ADD.C`, conserva i commenti, aggiunge `#line` direttive e viene visualizzato il risultato del dispositivo di output standard:  
  
```  
CL /E /C ADD.C  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)