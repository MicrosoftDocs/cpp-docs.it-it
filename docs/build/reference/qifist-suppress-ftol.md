---
title: -QIfist (Elimina ftol) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /qifist
dev_langs:
- C++
helpviewer_keywords:
- QIfist compiler option [C++]
- -QIfist compiler option [C++]
- /QIfist compiler option [C++]
ms.assetid: 1afd32a5-f658-4b66-85f4-e0ce4cb955bd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 77ec65e330cebb1de718330ba129e960383b31c6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="qifist-suppress-ftol"></a>/QIfist (Elimina _ftol)
Deprecato. Disattiva la chiamata della funzione helper `_ftol` quando è necessario eseguire una conversione da un tipo a virgola mobile a un tipo integrale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/QIfist  
```  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  **/QIfist** è disponibile solo nel compilatore per piattaforma x86; l'opzione del compilatore non è disponibile nei compilatori per piattaforma [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] o ARM.  
  
 Oltre a convertire da un tipo a virgola mobile a un tipo integrale, il `_ftol` funzione garantisce la modalità di arrotondamento di unità a virgola mobile (FPU) difetto (troncamento), impostando i bit 10 e 11 della parola di controllo. In questo modo si garantisce che la conversione da un tipo a virgola mobile a un tipo integrale si verifica come descritto dallo standard ANSI C (la parte frazionaria del numero viene eliminata). Quando si utilizza **/QIfist**, questa garanzia non è più valido. La modalità di arrotondamento sarà uno dei quattro, come documentato in manuali di riferimento Intel:  
  
-   Arrotonda verso (numero pari più vicino se equidistante)  
  
-   Arrotonda verso l'infinito negativo  
  
-   Arrotonda verso l'infinito positivo  
  
-   Arrotondamento per difetto  
  
 È possibile utilizzare il [control87, controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md) funzione C Run-Time per modificare il comportamento di arrotondamento della FPU. La modalità della FPU predefinita è "Round verso più vicino." Utilizzando **/QIfist** può migliorare le prestazioni dell'applicazione, ma non esente da rischi. È consigliabile verificare accuratamente le parti del codice che sono sensibili alle modalità di arrotondamento prima di fare affidamento sul codice compilato con **/QIfist** negli ambienti di produzione.  
  
 [/arch (x86)](../../build/reference/arch-x86.md) e **/QIfist** non può essere utilizzato nello stesso compilando.  
  
> [!NOTE]
>  **/QIfist** è non attivo per impostazione predefinita perché l'arrotondamento di bit a virgola mobile mobile influiscono anche virgola arrotondamento (che si verifica dopo ogni operazione di calcolo), quando si impostano i flag per l'arrotondamento di tipo C (verso zero), della virgola i calcoli potrebbero essere diversi. **/QIfist** non deve essere utilizzata se il codice dipende il comportamento previsto di troncare la parte frazionaria del numero a virgola mobile. Se si è certi, non utilizzare **/QIfist**.  
  
 Il **/QIfist** opzione è deprecata a partire da Visual Studio 2005. Il compilatore è stati introdotti miglioramenti significativi in float a int velocità di conversione. Per un elenco di opzioni del compilatore obsolete, vedere **deprecate o rimosse le opzioni del compilatore** in [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)