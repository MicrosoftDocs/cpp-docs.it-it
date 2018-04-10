---
title: Cenni preliminari su LIB | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- Lib
dev_langs:
- C++
helpviewer_keywords:
- LIB [C++], modes
ms.assetid: e997d423-f574-434f-8b56-25585d137ee0
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ef3d1e57371fdea62bb557830baca633f4165637
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="overview-of-lib"></a>Cenni preliminari su LIB
LIB creare librerie standard e librerie di importazione è possibile utilizzare con file di esportazione [collegamento](../../build/reference/linker-options.md) quando si compila un programma. LIB viene eseguito da un prompt dei comandi.  
  
 È possibile utilizzare LIB nelle modalità seguenti:  
  
-   [La creazione o modifica di una libreria COFF](../../build/reference/managing-a-library.md)  
  
-   [Estrazione di un oggetto membro in un file](../../build/reference/extracting-a-library-member.md)  
  
-   [Creazione di un file di esportazione e di una libreria di importazione](../../build/reference/working-with-import-libraries-and-export-files.md)  
  
 Queste modalità si escludono a vicenda; è possibile utilizzare LIB nella sola modalità alla volta.  
  
## <a name="lib-options"></a>Opzioni di LIB  
 Nella tabella seguente sono elencate le opzioni di lib.exe, con un collegamento a ulteriori informazioni.  
  
 **/DEF**  
 Creare una libreria di importazione e un file di esportazione.  
  
 Per ulteriori informazioni vedere [la creazione di un File di esportazione e la libreria di importazione](../../build/reference/building-an-import-library-and-export-file.md).  
  
 **/ERRORREPORT**  
 Invia a Microsoft informazioni sugli errori interni con lib.exe.  
  
 Per ulteriori informazioni vedere [esecuzione di LIB](../../build/reference/running-lib.md).  
  
 **/ ESPORTAZIONE**  
 Esporta una funzione dal programma.  
  
 Per ulteriori informazioni vedere [la creazione di un File di esportazione e la libreria di importazione](../../build/reference/building-an-import-library-and-export-file.md).  
  
 **/ ESTRAZIONE**  
 Creare un file oggetto (obj) che contiene una copia di un membro di una raccolta esistente.  
  
 Per ulteriori informazioni vedere [l'estrazione di un membro di una libreria](../../build/reference/extracting-a-library-member.md).  
  
 **/INCLUDE**  
 Aggiunge un simbolo per la tabella dei simboli.  
  
 Per ulteriori informazioni vedere [la creazione di un File di esportazione e la libreria di importazione](../../build/reference/building-an-import-library-and-export-file.md).  
  
 **/LIBPATH**  
 Esegue l'override del percorso delle librerie dell'ambiente.  
  
 Per ulteriori informazioni vedere [gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **/ ELENCO**  
 Visualizza le informazioni sulla libreria di output nell'output standard.  
  
 Per ulteriori informazioni vedere [gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **OPZIONE /LTCG**  
 Fa sì che la libreria da compilare mediante la generazione di codice in fase di collegamento.  
  
 Per ulteriori informazioni vedere [esecuzione di LIB](../../build/reference/running-lib.md).  
  
 **/ MACCHINA**  
 Specifica la piattaforma di destinazione per il programma.  
  
 Per ulteriori informazioni vedere [esecuzione di LIB](../../build/reference/running-lib.md).  
  
 **/ NOME**  
 Quando si compila una libreria di importazione, specifica il nome della DLL per la quale compilare la libreria di importazione.  
  
 Per ulteriori informazioni vedere [gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **/NODEFAULTLIB**  
 Rimuove uno o più librerie predefinite dall'elenco delle librerie che la ricerca durante la risoluzione di riferimenti esterni.  
  
 Per ulteriori informazioni vedere [gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **/NOLOGO**  
 Evita la visualizzazione del LIB copyright messaggio e la versione numero e impedisce la visualizzazione dei file di comando.  
  
 Per ulteriori informazioni vedere [esecuzione di LIB](../../build/reference/running-lib.md).  
  
 **/OUT**  
 Sostituisce il file di output predefinito.  
  
 Per ulteriori informazioni vedere [gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **INSTALLAZIONE**  
 Omette l'oggetto dalla libreria di output.  
  
 Per ulteriori informazioni vedere [gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **/ SOTTOSISTEMA**  
 Indica al sistema operativo come eseguire un programma creato mediante il collegamento alla libreria di output.  
  
 Per ulteriori informazioni vedere [gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **/VERBOSE**  
 Visualizza i dettagli sullo stato di avanzamento della sessione, inclusi i nomi dei file con estensione obj da aggiungere.  
  
 Per ulteriori informazioni vedere [esecuzione di LIB](../../build/reference/running-lib.md).  
  
 **/WX**  
 Considera gli avvisi come errori.  
  
 Per ulteriori informazioni vedere [esecuzione di LIB](../../build/reference/running-lib.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti a LIB](../../build/reference/lib-reference.md)   
 [File di Input LIB](../../build/reference/lib-input-files.md)   
 [File di Output LIB](../../build/reference/lib-output-files.md)   
 [Altri Output di LIB](../../build/reference/other-lib-output.md)   
 [Struttura di una libreria](../../build/reference/structure-of-a-library.md)