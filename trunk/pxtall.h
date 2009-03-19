/*  Grafx2 - The Ultimate 256-color bitmap paint program

    Copyright 2008 Yves Rizoud
    Copyright 2007 Adrien Destugues
    Copyright 1996-2001 Sunset Design (Guillaume Dorme & Karl Maritaud)

    Grafx2 is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; version 2
    of the License.

    Grafx2 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grafx2; if not, see <http://www.gnu.org/licenses/> or
    write to the Free Software Foundation, Inc.,
    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/
#include "struct.h"

  void Pixel_Tall                        (word X,word Y,byte Couleur);
  byte Lit_Pixel_Tall                    (word X,word Y);
  void Block_Tall                        (word Debut_X,word Debut_Y,word width,word height,byte Couleur);
  void Pixel_Preview_Normal_Tall         (word X,word Y,byte Couleur);
  void Pixel_Preview_Loupe_Tall          (word X,word Y,byte Couleur);
  void Ligne_horizontale_XOR_Tall        (word Pos_X,word Pos_Y,word width);
  void Ligne_verticale_XOR_Tall          (word Pos_X,word Pos_Y,word height);
  void Display_brush_Color_Tall          (word Pos_X,word Pos_Y,word x_offset,word y_offset,word width,word height,byte Couleur_de_transparence,word Largeur_brosse);
  void Display_brush_Mono_Tall           (word Pos_X,word Pos_Y,word x_offset,word y_offset,word width,word height,byte Couleur_de_transparence,byte Couleur,word Largeur_brosse);
  void Clear_brush_Tall                  (word Pos_X,word Pos_Y,word x_offset,word y_offset,word width,word height,byte Couleur_de_transparence,word image_width);
  void Remap_screen_Tall                 (word Pos_X,word Pos_Y,word width,word height,byte * Table_de_conversion);
  void Afficher_partie_de_l_ecran_Tall   (word width,word height,word image_width);
  void Afficher_une_ligne_ecran_Tall     (word Pos_X,word Pos_Y,word width,byte * line);
  void Lire_une_ligne_ecran_Tall         (word Pos_X,word Pos_Y,word width,byte * line);
  void Afficher_partie_de_l_ecran_zoomee_Tall(word width,word height,word image_width,byte * Buffer);
  void Display_brush_Color_zoom_Tall     (word Pos_X,word Pos_Y,word x_offset,word y_offset,word width,word Pos_Y_Fin,byte Couleur_de_transparence,word Largeur_brosse,byte * Buffer);
  void Display_brush_Mono_zoom_Tall      (word Pos_X,word Pos_Y,word x_offset,word y_offset,word width,word Pos_Y_Fin,byte Couleur_de_transparence,byte Couleur,word Largeur_brosse,byte * Buffer);
  void Clear_brush_zoom_Tall             (word Pos_X,word Pos_Y,word x_offset,word y_offset,word width,word Pos_Y_Fin,byte Couleur_de_transparence,word image_width,byte * Buffer);
  void Affiche_brosse_Tall               (byte * brush, word Pos_X,word Pos_Y,word x_offset,word y_offset,word width,word height,byte Couleur_de_transparence,word Largeur_brosse);
